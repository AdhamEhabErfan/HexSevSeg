const int ZERO = 0X7E;
const int ONE = 0X30;
const int TWO = 0X6D;
const int  THREE = 0X79;
const int  FOUR = 0X33;
const int  FIVE = 0X5B;
const int  SIX = 0X5F;
const int  SEVEN = 0X70;
const int   EIGHT = 0X7F;
const int  NINE = 0X7B;
const int A = 0X77;
const int B = 0X1F;
const int C = 0X4E;
const int D = 0X3D;
const int E = 0X4F;
const int F = 0X47;

//pins initialization
int pin[] = {
  2,3,4,5,6,7,8};

//calculating the no of pins
int no_pins = sizeof(pin)/sizeof(pin[0]);
void setup() {
 Serial.begin(9600);
  //setting all pins as Outputs
  for(int i = 0; i < no_pins;i++)
  {
    pinMode(pin[i],OUTPUT);

  }//end of for loop
}//end of setup


void loop() {
 for(int i=0;i<=15;i++)
  {
    switch(i)
    {
    case 0:
      display_it(ZERO);
      break;

    case 1:
      display_it(ONE);
      break;

    case 2:
      display_it(TWO);
      break;

    case 3:
      display_it(THREE);
      break;

    case 4:
      display_it(FOUR);
      break;

    case 5:
      display_it(FIVE);
      break;

    case 6:
      display_it(SIX);
      break;

    case 7:
      display_it(SEVEN);
      break;

    case 8:
      display_it(EIGHT);
      break;

    case 9:
      display_it(NINE);
      break;
    case 10:
      display_it(A);
      break;
    case 11:
      display_it(B);
      break;
    case 12:
      display_it(C);
      break;
    case 13:
      display_it(D);
      break;
    case 14:
      display_it(E);
      break;
    case 15:
      display_it(F);
      break;
    

    default :
      Serial.println("something went wrong");

    }//end of switch
  }//end of for loop()
}//end of loop
void display_it(const int x)
{
  for(int i=2,j=0;i<=8;i++,j++)
  {
    digitalWrite(i,bitRead(x,j));

  }
  delay(1000);
}
