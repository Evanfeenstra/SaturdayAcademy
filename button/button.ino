#include <Adafruit_NeoPixel.h>

int ledPin = 0;
int num=30;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(num, ledPin, NEO_GRB + NEO_KHZ800); 

void setup() {
  // put your setup code here, to run once:
  strip.begin();
}

void loop() {
  color();
}

void color() {
  int knob=analogRead(14)/35;
  
  for(int i=0; i<30; i++) {
    strip.setPixelColor(i,knob*i,i*8,255-knob*9);
  }
  strip.show();
}






