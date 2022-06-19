
int Gas_analog = 4;    // used for ESP32
int Gas_digital = 2;   // used for ESP32

void setup() {
  Serial.begin(115200);    
  pinMode(Gas_digital, INPUT);
}

void loop() {
  int gassensorAnalog = analogRead(Gas_analog);
  int gassensorDigital = digitalRead(Gas_digital);

  Serial.print("Gas Sensor: ");
  Serial.print(gassensorAnalog);
  Serial.print("\t");
  Serial.print("Gas Class: ");
  Serial.print(gassensorDigital);
  Serial.print("\t");
  Serial.print("\t");
  
  if (gassensorAnalog > 1000) {
    Serial.println("Gas");
  }
  else {
    Serial.println("No Gas");
  }
  delay(100);
}
