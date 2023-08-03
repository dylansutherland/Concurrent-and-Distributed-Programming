// C++ code
//
int sensorState = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // read the state of the motion sensor
  sensorState = digitalRead(2);
  // check if thesensor pin is HIGH (motion detected). 
  // if it is, set the LED on.
  if (sensorState == HIGH) {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Sensor activated!");
  } else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  delay(10); 
}