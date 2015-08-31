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

void color() {
  int knob=analogRead(14)/35;
  
  for(int i=0; i<30; i++) {
    strip.setPixelColor(i,knob*i,i*8,255-knob*9);
  }
  strip.show();
}

void off() {
  for(int i=0; i<30; i++) {
    strip.setPixelColor(i,0,0,0);
  }
  strip.show();
}






