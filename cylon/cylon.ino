#include <Adafruit_NeoPixel.h>

int ledPin = 0;
int num=30;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(num, ledPin, NEO_GRB + NEO_KHZ800); 

void setup() {
  // put your setup code here, to run once:
  strip.begin();
}

void loop() {
  cylon();
}

void cylon() {
  int knob=analogRead(14)/35;

  strip.setPixelColor(knob,0,255,0);
  strip.setPixelColor(knob-1,knob*8,0,255-knob*8);
  strip.setPixelColor(knob+1,0,knob*20,100);
  strip.show();
}






