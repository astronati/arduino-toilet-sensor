/**
 * @type {number}
 * @description The digital pin number where the positive pole of the led is connected.
 */
const int LED = 13;

/**
 * @type {number}
 * @description The analogic pin number where the sensor is connected.
 */
const int PHOTORESISTOR = 0;

/**
 * @type {number}
 * @description The digital pin number where the sensor is connected.
 */
const int MAGNETIC_SENSOR = 7;

void setup() {
  // Set led as output
  pinMode(LED, OUTPUT);
}

void loop() {
  // There is light in the room
  if (analogRead(PHOTORESISTOR) > 20
      // Door is closed
      && digitalRead(MAGNETIC_SENSOR) == HIGH) {
    // Turn on the led
    digitalWrite(LED, HIGH);
  }
  else {
    // Turn off the led
    digitalWrite(LED, LOW);
  }
}

