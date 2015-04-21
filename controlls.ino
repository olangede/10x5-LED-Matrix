void showPixels(int x, int y, long color){

  if(y == 1){
    pixelsA.setPixelColor(x,color);
  }
  if(y == 2){
    pixelsB.setPixelColor(x,color);
  }
  if(y == 3){
    pixelsC.setPixelColor(x,color);
  }
  if(y == 4){
    pixelsD.setPixelColor(x,color);
  }
  if(y == 5){
    pixelsE.setPixelColor(x,color);
  }


}

void clearPixels(){
  pixelsA.clear();
  pixelsB.clear();
  pixelsC.clear();
  pixelsD.clear();
  pixelsE.clear();
}

void setLine(int y,long x1,long x2, long x3, long x4, long x5, long x6, long x7, long x8, long x9, long x10){

  if(y == 1){
    pixelsA.setPixelColor(0,x1);
    pixelsA.setPixelColor(1,x2);
    pixelsA.setPixelColor(2,x3);
    pixelsA.setPixelColor(3,x4);
    pixelsA.setPixelColor(4,x5);
    pixelsA.setPixelColor(5,x6);
    pixelsA.setPixelColor(6,x7);
    pixelsA.setPixelColor(7,x8);
    pixelsA.setPixelColor(8,x9);
    pixelsA.setPixelColor(9,x10);

  }
  if(y == 2){
    pixelsB.setPixelColor(0,x1);
    pixelsB.setPixelColor(1,x2);
    pixelsB.setPixelColor(2,x3);
    pixelsB.setPixelColor(3,x4);
    pixelsB.setPixelColor(4,x5);
    pixelsB.setPixelColor(5,x6);
    pixelsB.setPixelColor(6,x7);
    pixelsB.setPixelColor(7,x8);
    pixelsB.setPixelColor(8,x9);
    pixelsB.setPixelColor(9,x10);
  }
  if(y == 3){
    pixelsC.setPixelColor(0,x1);
    pixelsC.setPixelColor(1,x2);
    pixelsC.setPixelColor(2,x3);
    pixelsC.setPixelColor(3,x4);
    pixelsC.setPixelColor(4,x5);
    pixelsC.setPixelColor(5,x6);
    pixelsC.setPixelColor(6,x7);
    pixelsC.setPixelColor(7,x8);
    pixelsC.setPixelColor(8,x9);
    pixelsC.setPixelColor(9,x10);
  }
  if(y == 4){
    pixelsD.setPixelColor(0,x1);
    pixelsD.setPixelColor(1,x2);
    pixelsD.setPixelColor(2,x3);
    pixelsD.setPixelColor(3,x4);
    pixelsD.setPixelColor(4,x5);
    pixelsD.setPixelColor(5,x6);
    pixelsD.setPixelColor(6,x7);
    pixelsD.setPixelColor(7,x8);
    pixelsD.setPixelColor(8,x9);
    pixelsD.setPixelColor(9,x10);
  }
  if(y == 5){
    pixelsE.setPixelColor(0,x1);
    pixelsE.setPixelColor(1,x2);
    pixelsE.setPixelColor(2,x3);
    pixelsE.setPixelColor(3,x4);
    pixelsE.setPixelColor(4,x5);
    pixelsE.setPixelColor(5,x6);
    pixelsE.setPixelColor(6,x7);
    pixelsE.setPixelColor(7,x8);
    pixelsE.setPixelColor(8,x9);
    pixelsE.setPixelColor(9,x10);
  }


}

void setLineByArray(int y,long colors[]){
  
  long x1 = colors[0];
  long x2 = colors[1];
  long x3 = colors[2];
  long x4 = colors[3];
  long x5 = colors[4];
  long x6 = colors[5];
  long x7 = colors[6];
  long x8 = colors[7];
  long x9 = colors[8];
  long x10 = colors[9];

  if(y == 1){
    pixelsA.setPixelColor(0,x1);
    pixelsA.setPixelColor(1,x2);
    pixelsA.setPixelColor(2,x3);
    pixelsA.setPixelColor(3,x4);
    pixelsA.setPixelColor(4,x5);
    pixelsA.setPixelColor(5,x6);
    pixelsA.setPixelColor(6,x7);
    pixelsA.setPixelColor(7,x8);
    pixelsA.setPixelColor(8,x9);
    pixelsA.setPixelColor(9,x10);

  }
  if(y == 2){
    pixelsB.setPixelColor(0,x1);
    pixelsB.setPixelColor(1,x2);
    pixelsB.setPixelColor(2,x3);
    pixelsB.setPixelColor(3,x4);
    pixelsB.setPixelColor(4,x5);
    pixelsB.setPixelColor(5,x6);
    pixelsB.setPixelColor(6,x7);
    pixelsB.setPixelColor(7,x8);
    pixelsB.setPixelColor(8,x9);
    pixelsB.setPixelColor(9,x10);
  }
  if(y == 3){
    pixelsC.setPixelColor(0,x1);
    pixelsC.setPixelColor(1,x2);
    pixelsC.setPixelColor(2,x3);
    pixelsC.setPixelColor(3,x4);
    pixelsC.setPixelColor(4,x5);
    pixelsC.setPixelColor(5,x6);
    pixelsC.setPixelColor(6,x7);
    pixelsC.setPixelColor(7,x8);
    pixelsC.setPixelColor(8,x9);
    pixelsC.setPixelColor(9,x10);
  }
  if(y == 4){
    pixelsD.setPixelColor(0,x1);
    pixelsD.setPixelColor(1,x2);
    pixelsD.setPixelColor(2,x3);
    pixelsD.setPixelColor(3,x4);
    pixelsD.setPixelColor(4,x5);
    pixelsD.setPixelColor(5,x6);
    pixelsD.setPixelColor(6,x7);
    pixelsD.setPixelColor(7,x8);
    pixelsD.setPixelColor(8,x9);
    pixelsD.setPixelColor(9,x10);
  }
  if(y == 5){
    pixelsE.setPixelColor(0,x1);
    pixelsE.setPixelColor(1,x2);
    pixelsE.setPixelColor(2,x3);
    pixelsE.setPixelColor(3,x4);
    pixelsE.setPixelColor(4,x5);
    pixelsE.setPixelColor(5,x6);
    pixelsE.setPixelColor(6,x7);
    pixelsE.setPixelColor(7,x8);
    pixelsE.setPixelColor(8,x9);
    pixelsE.setPixelColor(9,x10);
  }


}

void drawBitmapByArrays(long c1[], long c2[], long c3[], long c4[], long c5[]){
  
  setLineByArray(1,c1);
  setLineByArray(2,c1);
  setLineByArray(3,c1);
  setLineByArray(4,c1);
  setLineByArray(5,c1);
  
  
}


