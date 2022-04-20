#include<sevenSegmentDisplay.h>
#include<Keypad.h>
const byte ROWS =4;
const byte COLS =3;
char keypadArray[ROWS][COLS]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};
byte rowPins[ROWS]={6,5,4,3};
byte colPins[COLS]={2,1,0};
Keypad myKeypad =Keypad(makeKeymap(keypadArray),rowPins, colPins, ROWS, COLS);
sevenSegmentDisplay ssd(COMMON_ANODE,13,12,11,10,9,8,7,A0);
void setup()
{
}
  void loop()
  {
    char key =myKeypad.getKey();
    int num=key -'0';
    if (key)
    {
      if(key == '*' || key == '#'){
    }
    else{
      ssd.set(num);
    }
  }
}
