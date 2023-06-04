#define LED_PIN 8

void setup() {
  // Initiate the LED PIN
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  // LED is Active Low Mode
  // Turning ON the LED
  digitalWrite(LED_PIN, LOW);
  delay(1000);
  // Turning OFF the LED
  digitalWrite(LED_PIN, HIGH);
  delay(1000);
}