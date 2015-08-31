#include <Adafruit_NeoPixel.h>

int ledPin = 0;
int num=30;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(num, ledPin, NEO_GRB + NEO_KHZ800); 

void setup() {
  // put your setup code here, to run once:
  strip.begin();
  pinMode(12, INPUT_PULLUP);
}

void loop() {
  light();
}

void light() {
  int light=analogRead(15)/35;
  for(int i=0; i<30; i++) {
    if(i<=light) {
      strip.setPixelColor(i,255-i*8,255,i*8);
    }
    else {
      strip.setPixelColor(i,0,0,0);
    }
  }
  strip.show();
}

