int led = 8;
int led_2 = 9;
int tim = 500;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led_2, OUTPUT);
}
void loop()
{
  digitalWrite(led, HIGH);
  digitalWrite(led_2, LOW);
  delay(tim);
  digitalWrite(led, LOW);
  digitalWrite(led_2, HIGH);
  delay(tim);
}