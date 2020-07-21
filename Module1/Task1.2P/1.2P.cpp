// Pins stuff
const int btn = 2;
const int led1 = 9;

//int temp = 0;
uint8_t led_state = LOW;

void setup()
{
  Serial.begin(9600);
  pinMode(btn, INPUT_PULLUP);
  pinMode(led1, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(btn),toggle,FALLING);
  
}

void loop()
{
  // Doing other stuff
  Serial.println("Doing Stuff...");
  delay(1000);
}


void toggle()
{
  led_state = !led_state;
  digitalWrite(led1, led_state);
  Serial.println("Get.. - Interrupted!");
  Serial.println(led_state);
}
  
  