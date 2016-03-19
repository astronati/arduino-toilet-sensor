/**
 * @type {number}
 * @description The digital pin number where the positive pole of the led is connected.
 */
const int LED = 13;

/**
 * @type {number}
 * @description The analogic pin number where the sensor is connected.
 */
const int SENSOR = 0;

/**
 * @type {number}
 * @description The sensor value when feeded at 5V with a 330ohm resistance.
 */
int sensorValue = 0;

void setup() {
  // Set led as output
  pinMode(LED, OUTPUT);
}

void loop() {
  sensorValue = analogRead(SENSOR) < 50 ? HIGH : LOW;
  digitalWrite(LED, sensorValue);
}

