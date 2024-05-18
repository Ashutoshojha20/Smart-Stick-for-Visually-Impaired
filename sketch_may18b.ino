const int lm35Pin = A0;
const int buzzerPin =9;
void setup()
{
  Serial.begin(9600);
  pinMode(lm35Pin, INPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop()
{
  float sensorVal= analogRead(lm35Pin);
  float temperature = (sensorVal/1024.0);
  Serial.print("Temperature:");
  Serial.print(temperature);
  Serial.println("C");
  if(temperature>40){
    digitalWrite(buzzerPin,HIGH);}
  else{
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000);
}
