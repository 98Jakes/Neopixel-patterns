#include <Adafruit_NeoPixel.h>
      #define PIN 2
      #define DE
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(10, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.setBrightness(255);
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}


void loop () {
RedD(); RedU();
BlueD(); BlueU();
}

void Delay () {
  strip.show();
  delay(100);
}

void RainbowDot (){
  RedU ();
  //OrangeD ();
  //YellowU ();
  LightGreenD();
  GreenU();
  //BlueGreenLightD();
  //CyanU();
  OceanD();
  BlueU ();
  VioletD();
  MagentaU();
  RaspberryD();
}

void RainbowBar (){
        Red();
        delay(200);
        Orange();
        delay(200);
        Yellow();
        delay(200);
        LightGreen();
        delay(200);
        Green();
        delay(200);
        BlueGreenLight();
        delay(200);
        Cyan();
        delay(200);
        Blue();
        delay(200);
        Ocean();
        delay(200);
        Violet();
        delay(200); 
        Magenta();
        delay(200);  
        Raspberry();
        delay(200);
}

void RedU () {
  strip.setPixelColor(0, 255, 0, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 0, 0);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 0, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 0, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 0, 0);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 255, 0, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 0, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 0, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 255, 0, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 255, 0, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void RedD() {
  strip.setPixelColor(8, 255, 0, 0);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 0, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 0, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 255, 0, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 0, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 0, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 0, 0);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 0, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void OrangeU () {
  strip.setPixelColor(0, 255, 125, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 125, 0);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 125, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 125, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 125, 0);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 255, 125, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 125, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 125, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 255, 125, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 255, 125, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void OrangeD () {
  strip.setPixelColor(8, 255, 125, 0);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 125, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 125, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 255, 125, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 125, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 125, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 125, 0);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 125, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay(); 
}
void YellowU () {
  strip.setPixelColor(0, 255, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 255, 0);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 255, 0);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 255, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 255, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 255, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void YellowD () {
  strip.setPixelColor(0, 255, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 255, 0);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 255, 0);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 255, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 255, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 255, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void LightGreenU () {
  strip.setPixelColor(0, 255, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 255, 0);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 255, 0);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 255, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 255, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 255, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void LightGreenD() {
  strip.setPixelColor(8, 255, 255, 0);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 255, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 255, 0);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void GreenU () {
  strip.setPixelColor(0, 0, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 0, 255, 0);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 0, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 0, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 255, 0);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 0, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 0, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 0, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 0, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void GreenD() {
  strip.setPixelColor(8, 0, 255, 0);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 0, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 0, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 0, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 0, 255, 0);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 0, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void BlueGreenLightU () {
  strip.setPixelColor(0, 125, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 125, 255, 0);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 125, 255, 0);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 125, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 125, 255, 0);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 125, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 125, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 125, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 125, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 125, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void BlueGreenLightD() {
  strip.setPixelColor(8, 125, 255, 0);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 125, 255, 0);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 125, 255, 0);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 125, 255, 0);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 125, 255, 0);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 125, 255, 0);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 125, 255, 0);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 125, 255, 0);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void CyanU () {
  strip.setPixelColor(0, 0, 255, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 0, 255, 255);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 0, 255, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 0, 255, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 255, 255);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 0, 255, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 255, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 0, 255, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 0, 255, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 0, 255, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void CyanD() {
  strip.setPixelColor(8, 0, 255, 255);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 0, 255, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 255, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 0, 255, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 255, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 0, 255, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 0, 255, 255);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 0, 255, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void OceanU () {
  strip.setPixelColor(0, 0, 125, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 0, 125, 255);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 0, 125, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 0, 125, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 125, 255);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 0, 125, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 125, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 0, 125, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 0, 125, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 0, 125, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void OceanD() {
  strip.setPixelColor(8, 0, 125, 255);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 0, 125, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 125, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 0, 125, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 125, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 0, 125, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 0, 125, 255);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 0, 125, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void BlueU(){
  strip.setPixelColor(0, 0, 0, 255); strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 0, 0, 255); strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 0, 0, 255); strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 0, 0, 255); strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 0, 255); strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 0, 0, 255); strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 0, 255); strip.setPixelColor(5, 0, 0, 0); 
  Delay();
  strip.setPixelColor(7, 0, 0, 255); strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 0, 0, 255); strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 0, 0, 255); strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void BlueD () {
  strip.setPixelColor(8, 0, 0, 255); strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 0, 0, 255); strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 0, 0, 255); strip.setPixelColor(7, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 0, 0, 255); strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 0, 0, 255); strip.setPixelColor(5, 0, 0, 0); 
  Delay();
  strip.setPixelColor(3, 0, 0, 255); strip.setPixelColor(4, 0, 0, 0); 
  Delay();
  strip.setPixelColor(2, 0, 0, 255); strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(1, 0, 0, 255); strip.setPixelColor(2, 0, 0, 0); 
  Delay();
}
void VioletU () {
  strip.setPixelColor(0, 125, 0, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 125, 0, 255);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 125, 0, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 125, 0, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 125, 0, 255);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 125, 0, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 125, 0, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 125, 0, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 125, 0, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 125, 0, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void VioletD() {
  strip.setPixelColor(8, 125, 0, 255);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 125, 0, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 125, 0, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 125, 0, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 125, 0, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 125, 0, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 125, 0, 255);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 125, 0, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void MagentaU () {
  strip.setPixelColor(0, 255, 0, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 0, 255);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 0, 255);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 0, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 0, 255);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 255, 0, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 0, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 0, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 255, 0, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 255, 0, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void MagentaD() {
  strip.setPixelColor(8, 255, 0, 255);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 0, 255);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 0, 255);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 255, 0, 255);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 0, 255);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 0, 255);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 0, 255);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 0, 255);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}
void RaspberryU () {
  strip.setPixelColor(0, 255, 0, 125);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 0, 125);  strip.setPixelColor(0, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 0, 125);  strip.setPixelColor(1, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 0, 125);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 0, 125);  strip.setPixelColor(3, 0, 0, 0); 
  Delay();
  strip.setPixelColor(5, 255, 0, 125);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 0, 125);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 0, 125);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(8, 255, 0, 125);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(9, 255, 0, 125);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
}
void RaspberryD() {
  strip.setPixelColor(8, 255, 0, 125);  strip.setPixelColor(9, 0, 0, 0);
  Delay();
  strip.setPixelColor(7, 255, 0, 125);  strip.setPixelColor(8, 0, 0, 0);
  Delay();
  strip.setPixelColor(6, 255, 0, 125);  strip.setPixelColor(7, 0, 0, 0);
  Delay();
  strip.setPixelColor(5, 255, 0, 125);  strip.setPixelColor(6, 0, 0, 0);
  Delay();
  strip.setPixelColor(4, 255, 0, 125);  strip.setPixelColor(5, 0, 0, 0);
  Delay();
  strip.setPixelColor(3, 255, 0, 125);  strip.setPixelColor(4, 0, 0, 0);
  Delay();
  strip.setPixelColor(2, 255, 0, 125);  strip.setPixelColor(3, 0, 0, 0);
  Delay();
  strip.setPixelColor(1, 255, 0, 125);  strip.setPixelColor(2, 0, 0, 0);
  Delay();
}

void Red() {
  strip.setPixelColor(0, 255, 0, 0);  strip.setPixelColor(1, 255, 0, 0);
  strip.setPixelColor(2, 255, 0, 0);  strip.setPixelColor(3, 255, 0, 0); 
  strip.setPixelColor(4, 255, 0, 0);  strip.setPixelColor(5, 255, 0, 0);
  strip.setPixelColor(6, 255, 0, 0);  strip.setPixelColor(7, 255, 0, 0);
  strip.setPixelColor(7, 255, 0, 0);  strip.setPixelColor(8, 255, 0, 0);
  strip.setPixelColor(9, 255, 0, 0); 
  strip.show();
}

void Orange (){
   strip.setPixelColor(0, 255, 125, 0);  strip.setPixelColor(1, 255, 125, 0);
   strip.setPixelColor(2, 255, 125, 0);  strip.setPixelColor(3, 255, 125, 0); 
   strip.setPixelColor(4, 255, 125, 0);  strip.setPixelColor(5, 255, 125, 0);
   strip.setPixelColor(6, 255, 125, 0);  strip.setPixelColor(7, 255, 125, 0);
   strip.setPixelColor(7, 255, 125, 0);  strip.setPixelColor(8, 255, 125, 0); 
   strip.setPixelColor(9, 255, 125, 0); 
   strip.show();
}

void Yellow (){
  strip.setPixelColor(0, 255, 255, 0);  strip.setPixelColor(1, 255, 255, 0);
  strip.setPixelColor(2, 255, 255, 0);  strip.setPixelColor(3, 255, 255, 0); 
  strip.setPixelColor(4, 255, 255, 0);  strip.setPixelColor(5, 255, 255, 0);
  strip.setPixelColor(6, 255, 255, 0);  strip.setPixelColor(7, 255, 255, 0);
  strip.setPixelColor(7, 255, 255, 0);  strip.setPixelColor(8, 255, 255, 0);
  strip.setPixelColor(9, 255, 255, 0); 
   strip.show();
}

void LightGreen () {
  strip.setPixelColor(0, 125, 255, 0); strip.setPixelColor(1, 125, 255, 0); 
  strip.setPixelColor(2, 125, 255, 0);  strip.setPixelColor(3, 125, 255, 0);  
  strip.setPixelColor(4, 125, 255, 0);  strip.setPixelColor(5, 125, 255, 0); 
  strip.setPixelColor(6, 125, 255, 0); strip.setPixelColor(7, 125, 255, 0);
  strip.setPixelColor(7, 125, 255, 0); strip.setPixelColor(8, 125, 255, 0);
  strip.setPixelColor(9, 125, 255, 0); 
   strip.show();
}

void Green () {
  strip.setPixelColor(0, 0, 255, 0);  strip.setPixelColor(1, 0, 255, 0);
  strip.setPixelColor(2, 0, 255, 0);  strip.setPixelColor(3, 0, 255, 0); 
  strip.setPixelColor(4, 0, 255, 0);  strip.setPixelColor(5, 0, 255, 0);
  strip.setPixelColor(6, 0, 255, 0);  strip.setPixelColor(7, 0, 255, 0);
  strip.setPixelColor(7, 0, 255, 0);  strip.setPixelColor(8, 0, 255, 0);
  strip.setPixelColor(9, 0, 255, 0); 
  strip.show();
}

void BlueGreenLight () {
  strip.setPixelColor(0, 0, 255, 125);  strip.setPixelColor(1, 0, 255, 125);
  strip.setPixelColor(2, 0, 255, 125);  strip.setPixelColor(3, 0, 255, 125); 
  strip.setPixelColor(4, 0, 255, 125);  strip.setPixelColor(5, 0, 255, 125);
  strip.setPixelColor(6, 0, 255, 125);  strip.setPixelColor(7, 0, 255, 125);
  strip.setPixelColor(7, 0, 255, 125);  strip.setPixelColor(8, 0, 255, 125);
  strip.setPixelColor(9, 0, 255, 125); 
  strip.show();
}

void Cyan () {
  strip.setPixelColor(0, 0, 255, 255);  strip.setPixelColor(1, 0, 255, 255);
  strip.setPixelColor(2, 0, 255, 255);  strip.setPixelColor(3, 0, 255, 255); 
  strip.setPixelColor(4, 0, 255, 255);  strip.setPixelColor(5, 0, 255, 255);
  strip.setPixelColor(6, 0, 255, 255);  strip.setPixelColor(7, 0, 255, 255);
  strip.setPixelColor(7, 0, 255, 255);  strip.setPixelColor(8, 0, 255, 255);
  strip.setPixelColor(9, 0, 255, 255); 
  strip.show();
}

void Ocean () {
  strip.setPixelColor(0, 0, 125, 255);  strip.setPixelColor(1, 0, 125, 255);
  strip.setPixelColor(2, 0, 125, 255);  strip.setPixelColor(3, 0, 125, 255); 
  strip.setPixelColor(4, 0, 125, 255);  strip.setPixelColor(5, 0, 125, 255);
  strip.setPixelColor(6, 0, 125, 255);  strip.setPixelColor(7, 0, 125, 255);
  strip.setPixelColor(7, 0, 125, 255);  strip.setPixelColor(8, 0, 125, 255);
  strip.setPixelColor(9, 0, 125, 255); 
  strip.show();
}

void Blue (){
  strip.setPixelColor(0, 0, 0, 255);  strip.setPixelColor(1, 0, 0, 255);
  strip.setPixelColor(2, 0, 0, 255);  strip.setPixelColor(3, 0, 0, 255); 
  strip.setPixelColor(4, 0, 0, 255);  strip.setPixelColor(5, 0, 0, 255);
  strip.setPixelColor(6, 0, 0, 255);  strip.setPixelColor(7, 0, 0, 255);
  strip.setPixelColor(7, 0, 0, 255);  strip.setPixelColor(8, 0, 0, 255);
  strip.setPixelColor(9, 0, 0, 255); 
  strip.show();
}

void Violet () {
  strip.setPixelColor(0, 125, 0, 255);  strip.setPixelColor(1, 125, 0, 255);
  strip.setPixelColor(2, 125, 0, 255);  strip.setPixelColor(3, 125, 0, 255); 
  strip.setPixelColor(4, 125, 0, 255);  strip.setPixelColor(5, 125, 0, 255);
  strip.setPixelColor(6, 125, 0, 255);  strip.setPixelColor(7, 125, 0, 255);
  strip.setPixelColor(7, 125, 0, 255);  strip.setPixelColor(8, 125, 0, 255);
  strip.setPixelColor(9, 125, 0, 255); 
  strip.show();
}

void Magenta() {
  strip.setPixelColor(0, 255, 0, 255);  strip.setPixelColor(1, 255, 0, 255);
  strip.setPixelColor(2, 255, 0, 255);  strip.setPixelColor(3, 255, 0, 255); 
  strip.setPixelColor(4, 255, 0, 255);  strip.setPixelColor(5, 255, 0, 255);
  strip.setPixelColor(6, 255, 0, 255);  strip.setPixelColor(7, 255, 0, 255);
  strip.setPixelColor(7, 255, 0, 255);  strip.setPixelColor(8, 255, 0, 255);
  strip.setPixelColor(9, 255, 0, 255);  
  strip.show();
}  

 void Raspberry () {
  strip.setPixelColor(0, 255, 0, 125);  strip.setPixelColor(1, 255, 0, 125);
  strip.setPixelColor(2, 255, 0, 125);  strip.setPixelColor(3, 255, 0, 125);
  strip.setPixelColor(4, 255, 0, 125);  strip.setPixelColor(5, 255, 0, 125);
  strip.setPixelColor(6, 255, 0, 125);  strip.setPixelColor(7, 255, 0, 125);
  strip.setPixelColor(7, 255, 0, 125);  strip.setPixelColor(8, 255, 0, 125);
  strip.setPixelColor(9, 255, 0, 125);  
  strip.show();
 }

