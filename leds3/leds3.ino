#include <Adafruit_NeoPixel.h>

int ledPin = 0;
int num=30;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(num, ledPin, NEO_GRB + NEO_KHZ800); 

void setup() {
  // put your setup code here, to run once:
  strip.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<30; i++) {
    strip.setPixelColor(i,i*8,255-i*8,999/i);
  }
  delay(50);
  strip.show();
  for(int i=0; i<30; i++) {
    strip.setPixelColor(i,0,i*9,i);
  }
  delay(50);
  strip.show();
}
