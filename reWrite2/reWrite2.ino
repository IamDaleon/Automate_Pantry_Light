/*
  Ultrasonic Sensor HC-SR04 and 2 LED Strip that utlizes NeoPixel library

  by Daleon L
  www.twitter.com/iamDaleon
  www.github.com/iamDaleon
*/

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
 #include <avr/power.h> // Required for 16 MHz Adafruit Trinket
#endif

 /* Definers */
 // NeoPixels
#define STRIP1 11 
#define STRIP2 12
#define NUMPIXELS 60 // Strip light & NeoPixels defined

// Ultrasonic Sensor HC-SR04
const int trigPin = 2, echoPin = 4;

Adafruit_NeoPixel pixels1(NUMPIXELS, STRIP1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixels2(NUMPIXELS, STRIP2, NEO_GRB + NEO_KHZ800);

#define DELAYVAL 10000 // Time (in milliseconds) to pause between pixels

// defines variables
long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(115200); // Starts the serial communication

   // These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
  // Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif
  // END of Trinket-specific code.

  pixels1.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
  pixels2.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void loop(){
        // Clears the trigPin
            digitalWrite(trigPin, LOW);
            delayMicroseconds(2);
        // Sets the trigPin on HIGH state for 10 micro seconds
            digitalWrite(trigPin, HIGH);
            delayMicroseconds(10);
            digitalWrite(trigPin, LOW);
        // Reads the echoPin, returns the sound wave travel time in microseconds
            duration = pulseIn(echoPin, HIGH);
        // Calculating the distance
            distance = duration * 0.034 / 2;
        // Prints the distance on the Serial Monitor
            Serial.print("Distance: ");
            Serial.println(distance);

    while (distance >= 10)
    {
        pixels1.clear(); // Set all pixel colors to 'off'
        pixels2.clear(); // Set all pixel colors to 'off'

        // The first NeoPixel in a strand is #0, second is 1, all the way up
        // to the count of pixels minus one.
        for(int i=0; i<NUMPIXELS; i++) { // For each pixel...

        // pixels.Color() takes RGB values, from 0,0,0 up to 255,255,255
        // Here we're using a moderately bright bluish green color:
        pixels1.setPixelColor(i, pixels1.Color(240, 237, 225));
        pixels2.setPixelColor(i, pixels2.Color(240, 237, 225));

        pixels1.show();   // Send the updated pixel colors to the hardware.
        pixels2.show();   // Send the updated pixel colors to the hardware.
        }

        delay(DELAYVAL); // Pause before next pass through loop
        break;
    }
    while (distance <= 9){
        pixels1.show();
        pixels2.show();
        pixels1.clear(); // Set all pixel colors to 'off'
        pixels2.clear(); // Set all pixel colors to 'off'
        break;
    }
}