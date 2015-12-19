//include the library
#include <Ultra.h>
//define the sensor (triggerPin, echoPin)
Ultra ultra(12, 10);
void setup() {
  // put your setup code here, to run once:
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // read the distance and print out the value
Serial.println(ultra.medir());
}
