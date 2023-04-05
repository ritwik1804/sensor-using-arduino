#define sensorPin 8


unsigned long lastEvent = 0;

void setup() {
  pinMode(sensorPin, INPUT);  
  Serial.begin(9600);
}

void loop() {
  
  int sensorData = digitalRead(sensorPin);

  if (sensorData == LOW) {
    
    if (millis() - lastEvent > 25) {
      Serial.println("Clap detected!");
    }
    

    lastEvent = millis();
  }
}
