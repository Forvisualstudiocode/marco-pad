#include <Keyboard.h>
#include <Adafruit_NeoPixel.h>

// Declare a NeoPixel strip object with 7 pixels on pin 6
#define PIXEL_COUNT 7
#define PIXEL_PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(PIXEL_COUNT, PIXEL_PIN, NEO_GRB + NEO_KHZ800);




// use this option for Windows and Linux:
//  char ctrlKey = KEY_LEFT_CTRL;
                               //Including the mouse librar
int pin1 = 2;                                       //Declaring variables for the pins
int pin2 = 5;
int pin3 = 6;
int pin4 = 7;
int pin5 = 8;

void setup() {

pinMode(pin1, INPUT_PULLUP);                        //Setting up the internal pull-ups resistors
pinMode(pin2, INPUT_PULLUP);                        //and also setting the pins to inputs.
pinMode(pin3, INPUT_PULLUP);
pinMode(pin4, INPUT_PULLUP);
pinMode(pin5, INPUT_PULLUP);
strip.begin();

}
void loop() {
  

  if (digitalRead(pin1) == LOW)                     //Checking if the first switch has been pressed
  {
    Keyboard.press(KEY_F4);                            //Sending the  character
    delay(100);
    Keyboard.println("terminal");
  }

  if (digitalRead(pin2) == LOW)                     //Checking if the second switch has been pressed
  {
    Keyboard.print("KEY_F4");  //Sending a string
    delay(500);
    Keyboard.println("Minecraft");
  }

  if (digitalRead(pin3) == LOW)                     //Checking if the third switch has been pressed
  {
    Keyboard.println("You have pressed switch 3."); //Sending a string and a return
    delay(500);
  }

  if (digitalRead(pin4) == LOW)                     //Checking if the fourth switch has been pressed
  {
    Keyboard.press(KEY_LEFT_GUI);                       //Pressing down the right click
    delay(100);
    Keyboard.write('c');                 //Releasing the right click
    delay(500);
  }

  if (digitalRead(pin5) == LOW)                     //Checking if the fifth switch has been pressed
  {
    Keyboard.println("Marco-Pad");
    delay(500);                                     //Sending a string and a return
  }
  strip.setPixelColor(0, 255, 0, 0);
  strip.show();
  delay(1000);

  // Set the second pixel to green
  strip.setPixelColor(1, 0, 255, 0);
  strip.show();
  delay(1000);

  // Set the third pixel to blue
  strip.setPixelColor(2, 0, 0, 255);
  strip.show();
  delay(1000);

  // Set the fourth pixel to purple
  strip.setPixelColor(3, 128, 0, 128);
  strip.show();
  delay(1000);

  // Set the fifth pixel to yellow
  strip.setPixelColor(4, 255, 255, 0);
  strip.show();
  delay(1000);

  // Set the sixth pixel to white
  strip.setPixelColor(5, 255, 255, 255);
  strip.show();
  delay(1000);

  // Set the seventh pixel to pink
  strip.setPixelColor(6, 255, 105, 180);
  strip.show();
  delay(1000);
  
}
