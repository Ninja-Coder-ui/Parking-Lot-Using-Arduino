#include<Keypad.h>

const byte ROWS=4;
const byte COLS=4;

char hexaKeys[ROWS][COLS]={
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins [ROWS]={9,8,7,6};
byte colPins [COLS]={5,4,3,2};
Keypad customkeypad=Keypad(makeKeymap(hexaKeys), rowPins,colPins,ROWS, COLS);

void setup(){
  Serial.begin(9600);
}

void loop(){
  char customKey=customkeypad.getKey();
  if (customKey){
    lcd.setCursor(0, 0);
    lcd.println(customKey);
  }
}