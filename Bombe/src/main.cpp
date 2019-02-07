#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 4; //three columns
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {5,4,3,2}; //connect to the column pinouts of the keypad
char key2;
char key3;
char key4;
char key5;
char key;
String code1;
String code2;
String code3;
String code4;
String code5;
int i = 0;
int u = 0;
int p = 0;
int q = 0;

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

void setup(){
  Serial.begin(9600);
}

void loop(){
  if (u == 0 && i ==  0){
      key = keypad.getKey();
  }
 

  if (u  > 0) {
    key3 = keypad.getKey();
    key2 = 0;
  }

  if (q  > 0) {
    key5 = keypad.getKey();
    key4 = 0;
  }

  if (i  > 0) {
    key2 = keypad.getKey();
    key = 0;
  }
  if (p  > 0) {
    key4 = keypad.getKey();
    key3 = 0;
  }
    // just print the pressed key
   if (key && key != 'A' && key != 'D'){
    Serial.println(key);
    i++;

  }

  if (key2 && key2 != 'A' && key2 != 'D'){
   Serial.println(key2);
   u++;



 }

 if (key3 && key3 != 'A' && key3 != 'D'){
  Serial.println(key3);
  p++;

}




if (key4 && key4 != 'A' && key4 != 'D'){
 Serial.println(key4);
 q++;


}

if (key5 && key5 == 'A' && code1 == "2" && code3 == "5" && code3 == "0" && code4 == "9" ){
 Serial.println("Acces Granted!");
 code1 = "0";
 code2 = "0";
 code3 = "0";
 code4 = "0";
 code5 = "0";

 key5 = 0;

}



  if(key){
    code1 = key;
    Serial.println(code1);
    Serial.println("code1");
  }
  if (key2) {
    code2 = key2 ;
    Serial.println(code2);
    Serial.println("code2");}

  if (key3) {
    code3 = key3 ;
    Serial.println(code3);
    Serial.println("code3");}

    if(key4){
      code4 = key4;
      Serial.println(code4);
      Serial.println("code4");

    }
    if(key5){
      code4 = key4;
      Serial.println(code4);
      Serial.println("code4");

    }



}
