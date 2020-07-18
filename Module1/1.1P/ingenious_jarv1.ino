

int AO = 0;
int temp = 0;

const int led1 = 9;

void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
}

void loop()
{
  temp = analogRead(AO);
  Serial.println(temp);
  if (temp > 168)  {// < -- 168 Celcius
    digitalWrite(led1, HIGH);
  }
  else
  {
    digitalWrite(led1, LOW);
  }
}