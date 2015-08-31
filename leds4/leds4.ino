#include <Adafruit_NeoPixel.h>

int ledPin = 0;
int num=30;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(num, ledPin, NEO_GRB + NEO_KHZ800); 

void setup() {
  // put your setup code here, to run once:
  strip.begin();
}

void loop() {
  for(int i=0; i<30; i++) {
    strip.setPixelColor(i,0,255,0);
    strip.setPixelColor(i-1,0,0,0);
    strip.show();
    delay(analogRead(14)/50);
  }
  for(int i=29; i>=0; i--) {
    strip.setPixelColor(i,0,255,0);
    strip.setPixelColor(i+1,0,0,0);
    strip.show();
    delay(analogRead(14)/50);
  }
}









