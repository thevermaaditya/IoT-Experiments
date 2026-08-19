// Experiment 01: LED Control via Smartphone App
// Commands:
// '1' -> LED ON
// '0' -> LED OFF

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    char command = Serial.read();

    if (command == '1')
    {
      digitalWrite(13, HIGH);
    }
    else if (command == '0')
    {
      digitalWrite(13, LOW);
    }
  }
}
