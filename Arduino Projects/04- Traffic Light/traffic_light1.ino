

#define RED_LED_PIN 13
#define ORANGE_LED_PIN 12
#define GREEN_LED_PIN 8



void setup() {
  
  pinMode(RED_LED_PIN,OUTPUT);
  pinMode(ORANGE_LED_PIN,OUTPUT);
  pinMode(GREEN_LED_PIN,OUTPUT);
  
  
  
}



void loop() {
  
  digitalWrite(RED_LED_PIN,HIGH);
  delay(5000);
  digitalWrite(RED_LED_PIN,LOW);
  
  
  digitalWrite(ORANGE_LED_PIN,HIGH);
  delay(3000);
  digitalWrite(ORANGE_LED_PIN,LOW);
  
  
  digitalWrite(GREEN_LED_PIN,HIGH);
  delay(5000);
  digitalWrite(GREEN_LED_PIN,LOW);
  
  
}