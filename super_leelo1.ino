void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  digitalWrite(13,HIGH);
  Serial.println("LED ON");
  }