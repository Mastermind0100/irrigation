int pin1 = 9;
int pin2 = 12;
void setup() 
{
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  Serial.begin(9600);
}
void loop() 
{
  int watersensor = analogRead(A0);
  int moisturesensor = analogRead(A1);
  Serial.println(watersensor);
  Serial.println(moisturesensor);
  if(watersensor==0)
  {
    digitalWrite(pin1,HIGH);
    Serial.println(&quot;Water level low&quot;);
    delay(2000);
  }
  if(moisturesensor&gt;500)
  {
    digitalWrite(pin2,HIGH);
    Serial.println(&quot;Moisture level low&quot;);
    delay(2000);
    digitalWrite(pin2,LOW);
  }
  delay(1);
}
