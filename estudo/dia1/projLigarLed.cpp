int ledPin = 10;
int ledPin2 = 9;
void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int tempo = 1000;
	digitalWrite(10,HIGH);
  	delay(1000);
  	Serial.print(digitalRead(ledPin));
    digitalWrite(10,LOW);
  	Serial.print(digitalRead(ledPin));
  	delay(tempo);
  digitalWrite(9,HIGH);
  	delay(tempo*2);
    digitalWrite(9,LOW);
  	delay(tempo*2);
}
