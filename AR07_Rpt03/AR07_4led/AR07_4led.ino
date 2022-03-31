/*
 Dimming 4 leds
 */

int ledY = 9;    // LED connected to digital pin 3
int ledB = 5;
int ledR = 3;
int ledG = 6;

int dimTime = 20;

void setup()  { 
  // nothing happens in setup 
} 

void loop() {
  dimLed(ledR);
  dimLed(ledG);
  dimLed(ledB);
  dimLed(ledY);
}

void dimLed(int led)  { 
  // fade in from min to max in increments of 5 points:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // sets the value (range from 0 to 255):
    analogWrite(led, fadeValue);   
    // wait for 30 milliseconds to see the dimming effect    
    delay(dimTime);                            
  } 

  // fade out from max to min in increments of 5 points:
  for(int fadeValue = 255 ; fadeValue >=0; fadeValue -=5) {
    analogWrite(led, fadeValue);
    delay(dimTime);
  }
}
