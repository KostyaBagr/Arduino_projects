#define PIN_SENSOR 4

int previous_state = 0;
int red_led = 3;
int green_led = 2;

void setup() {
  Serial.begin(9600);
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(PIN_SENSOR, INPUT);  
}
 
void loop() {
  int new_state = digitalRead(PIN_SENSOR);
  if (new_state != previous_state){
    if (new_state == 0){
      Serial.println("Barrier!"); // define barrier
      pinMode(green_led, LOW);
      pinMode(red_led, HIGH);
    }
    else{
      Serial.println("Not barrier"); // not barrier
      pinMode(red_led, LOW);
      pinMode(green_led, HIGH);
    }
  }
  previous_state = new_state;
}