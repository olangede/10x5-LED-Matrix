#include <Adafruit_NeoPixel.h>
#include <avr/power.h>
Adafruit_NeoPixel pixelsA = Adafruit_NeoPixel(10, 6, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsB = Adafruit_NeoPixel(10, 7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsC = Adafruit_NeoPixel(10, 8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsD = Adafruit_NeoPixel(10, 9, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelsE = Adafruit_NeoPixel(10, 10, NEO_GRB + NEO_KHZ800);
byte byteRead;
int x;
byte incoming[] = {
  100};
int r,g,b,posX,posY,clearScreen;
void setup() {
  Serial.begin(19200);
  pixelsA.begin();
  pixelsB.begin();
  pixelsC.begin();
  pixelsD.begin();
  pixelsE.begin();
}
void loop() {
  if (Serial.available()) {
    byteRead = Serial.read();
    if(byteRead==44){
      x++;
      if(x==6) x = 0;
    }
    else if(byteRead==10){
      r = incoming[0]-48;
      g = incoming[1]-48;
      b = incoming[2]-48;
      posX = incoming[3]-48;
      posY = incoming[4]-48;
      clearScreen = incoming[5]-48;
      long cv = 28.3333333333;
      long c = pixelsA.Color(r*cv,g*cv,b*cv);
      showPixels(posX,posY+1,c);
      pixelsA.show();
      pixelsB.show();
      pixelsC.show();
      pixelsD.show();
      pixelsE.show();
      delayMicroseconds(50);
      x=0;
    }
    else{
      incoming[x] = byteRead;
    }
  }
}






