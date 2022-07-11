int greenLed = 2;
int yellowLed = 3;
int redLed = 4;

int analogValue = 0;
float voltage = 0;
int ledDelay = 1000;
void setup()
{
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed,OUTPUT);
  pinMode(redLed,OUTPUT);
}

void loop()
{
  analogValue = analogRead(A0);
  voltage = 0.0048*analogValue;
  
  if( voltage >= 1.6 )
    digitalWrite(greenLed, HIGH);
  else if (voltage > 1.2 && voltage < 1.6)
    digitalWrite(yellowLed, HIGH);
  else if( voltage <= 1.2)
    digitalWrite(redLed, HIGH);  
 
  delay(ledDelay);
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, LOW); 
  digitalWrite(greenLed, LOW);
}
