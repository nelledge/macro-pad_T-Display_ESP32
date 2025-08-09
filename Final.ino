#include <BleKeyboard.h>
#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

BleKeyboard bleKeyboard;

#define button0 12
#define button1 15
#define button2 13
#define button3 27
#define button4 2
#define button5 26
#define button6 33
#define button7 17
#define button8 25
#define button9 32

#define button_lock 0

#define TFT_MOSI 19
#define TFT_SCLK 18
#define TFT_CS 5
#define TFT_DC 16
#define TFT_RST 23
#define TFT_BL 4

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCLK, TFT_RST);

int currentSlide = 1;
int delay_time = 150;
int text_sice = 4;
int dely_time = 200;
int dely_extra_time = 0;
bool lock_button = false;  
uint16_t background_color_lock = ST77XX_BLUE;

void showBottomHalfText(String text, uint16_t coular, int sice_if_to_big = 4);

char one_1[] = "Bluetooth";
char two_1[] = "Sound";
char three_1[] = "Display";
char fhour_1[] = "Vol. DOWN";
char five_1[] = "Mute";
char six_1[] = "Vol. UP";
char seven_1[] = "Desktop";
char eight_1[] = "Play-Pause";
char nine_1[] = "Mic-Mute";

char one_2[] = "FireFox";
char two_2[] = "Anime";
char three_2[] = "Anilist";
char fhour_2[] = "YouTube";
char five_2[] = "";
char six_2[] = "Password";
char seven_2[] = "Home Ass.";
char eight_2[] = "OctoPrint";
char nine_2[] = "WhatsApp";

void setup() {
  Serial.begin(9600);

  pinMode(button0, INPUT_PULLUP);
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(button7, INPUT_PULLUP);
  pinMode(button8, INPUT_PULLUP);
  pinMode(button9, INPUT_PULLUP);
  pinMode(button_lock, INPUT_PULLUP);

  pinMode(TFT_BL, OUTPUT);      // TTGO T-Display enable Backlight pin 4
  digitalWrite(TFT_BL, HIGH);   // T-Display turn on Backlight
  tft.init(135, 240);           // Initialize ST7789 240x135

  Serial.println("Macro pad started.");
  Serial.println("Starting BLE work!");
  bleKeyboard.begin();

  tft.setRotation(3);
  tft.fillScreen(ST77XX_BLACK);

  if(!bleKeyboard.isConnected()){

    tft.fillScreen(ST77XX_BLACK);

    while(!bleKeyboard.isConnected()){
      testdrawrects(ST77XX_GREEN);
      delay(500);
      testdrawrects(ST77XX_BLACK);
      delay(500);}

    if(bleKeyboard.isConnected()){
      button_press_slide();
    }
  }
  // backround_lines(ST77XX_MAGENTA);
  button_press_slide();

}

void loop() {
  if(!bleKeyboard.isConnected()){

    tft.fillScreen(ST77XX_BLACK);

    while(!bleKeyboard.isConnected()){
      testdrawrects(ST77XX_GREEN);
      delay(500);
      testdrawrects(ST77XX_BLACK);
      delay(500);}

    if(bleKeyboard.isConnected()){
      button_press_slide();
    }
  }

  if(digitalRead(button_lock) == LOW){
    lock_button = !lock_button; 
    if (lock_button == true){
      tft.fillScreen(background_color_lock);
      dely_extra_time = 1000;
      delay(250);
      button_press_slide();
    }
    else{
      dely_extra_time = 0;
      tft.fillScreen(ST77XX_BLACK);
      delay(250);
      button_press_slide();
    }
  }

  if (digitalRead(button0) == LOW) {
    currentSlide = (currentSlide == 1) ? 2 : 1;
    Serial.print("Slide changed to: ");
    Serial.println(currentSlide);
    button_press_slide();
    delay(delay_time);
  }

  if (digitalRead(button1) == LOW) { 
    if (currentSlide == 1){button_1_1 ();}
    if (currentSlide == 2){button_2_1 ();}
    Serial.print("Button 1 on slide "); Serial.println(currentSlide);
    delay(delay_time); }

  if (digitalRead(button2) == LOW) {
    if (currentSlide == 1){button_1_2 ();}
    if (currentSlide == 2){button_2_2 ();}
    Serial.print("Button 2 on slide "); Serial.println(currentSlide);
    delay(delay_time); }

  if (digitalRead(button3) == LOW) { 
    if (currentSlide == 1){button_1_3 ();}
    if (currentSlide == 2){button_2_3 ();}
    Serial.print("Button 3 on slide "); Serial.println(currentSlide);
    delay(delay_time); }

  if (digitalRead(button4) == LOW) {
    if (currentSlide == 1){button_1_4 ();}
    if (currentSlide == 2){button_2_4 ();}
    Serial.print("Button 4 on slide "); Serial.println(currentSlide);
    delay(delay_time); }

  if (digitalRead(button5) == LOW) {
    if (currentSlide == 1){button_1_5 ();}
    if (currentSlide == 2){button_2_5 ();}
    Serial.print("Button 5 on slide "); Serial.println(currentSlide);
    delay(delay_time); }

  if (digitalRead(button6) == LOW) {
    if (currentSlide == 1){button_1_6 ();}
    if (currentSlide == 2){button_2_6 ();}
    Serial.print("Button 6 on slide "); Serial.println(currentSlide);
    delay(delay_time); }

  if (digitalRead(button7) == LOW) {
    if (currentSlide == 1){button_1_7 ();}
    if (currentSlide == 2){button_2_7 ();}
    Serial.print("Button 7 on slide "); Serial.println(currentSlide);
    delay(delay_time); }

  if (digitalRead(button8) == LOW) {
    if (currentSlide == 1){button_1_8 ();}
    if (currentSlide == 2){button_2_8 ();}
    Serial.print("Button 8 on slide "); Serial.println(currentSlide);
    delay(delay_time); }
  
  if (digitalRead(button9) == LOW) {
    if (currentSlide == 1){button_1_9 ();}
    if (currentSlide == 2){button_2_9 ();}
    Serial.print("Button 9 on slide "); Serial.println(currentSlide);
    delay(delay_time); }
}
