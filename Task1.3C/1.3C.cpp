// Pins stuff
const int btn = 2;

const int led1_pin = 9;
const int led2_pin = 8;

const int pir_pin = 3;


uint8_t led1_state = LOW;
uint8_t led2_state = LOW;


void setup()
{
  Serial.begin(9600);
  // Detections
  pinMode(btn, INPUT_PULLUP);
  pinMode(pir_pin, INPUT_PULLUP);
  
  // Pins
  pinMode(led1_pin, OUTPUT);
  pinMode(led2_pin, OUTPUT);
  
  attachInterrupt(digitalPinToInterrupt(btn),toggle_led,FALLING);
  
  attachInterrupt(digitalPinToInterrupt(pir_pin),toggle_led2,CHANGE);
}

void loop()
{
  // Doing other stuff
  Serial.println("Doing Stuff...");
  delay(2000);
}


void toggle_led()
{
  led1_state = !led1_state;
  digitalWrite(led1_pin, led1_state);
  Serial.println("Interrupted Mk1!");
  Serial.println(led1_state);
}

void toggle_led2()
{
  led2_state = !led2_state;
  digitalWrite(led2_pin, led2_state);
  Serial.println("Interrupted Mk2");
  Serial.println(led2_state);
}