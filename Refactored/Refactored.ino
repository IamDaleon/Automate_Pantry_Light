#include <Adafruit_NeoPixel.h>

#define NUMPIXELS 60
#define STRIP1 11
#define STRIP2 12

const int trigPin = 2, echoPin = 4;

Adafruit_NeoPixel pixels1(NUMPIXELS, STRIP1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS, STRIP2, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 20000 // Time (in milliseconds) to pause between pixels

// Function to set all pixel colors to a specified RGB value
void setPixelColors(Adafruit_NeoPixel &strip, uint32_t color) {
  for (int i = 0; i < NUMPIXELS; i++) {
    strip.setPixelColor(i, color);
  }
}

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  pixels1.begin();
  pixels2.begin();
  pixels1.setBrightness(150);
  pixels2.setBrightness(150);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance >= 8) {
    setPixelColors(pixels1, pixels1.Color(240, 237, 225));
    setPixelColors(pixels2, pixels2.Color(240, 237, 225));
    pixels1.show();
    pixels2.show();
    delay(DELAYVAL);
  } else if (distance <= 7) {
    pixels1.clear();
    pixels2.clear();
    pixels1.show();
    pixels2.show();
  }
}