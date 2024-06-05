



#define LED_PIN 12
#define BUTTON_PIN 8


void setup() {
  
  Serial.begin(9600);
  
 	pinMode(LED_PIN,OUTPUT); 
  	pinMode(BUTTON_PIN,INPUT);
  
}



void loop() {
  
 if(digitalRead(BUTTON_PIN) == HIGH) {
    
    Serial.println("DEBUG: Button Presses");
    digitalWrite(LED_PIN,HIGH);
    
  } else {
    digitalWrite(LED_PIN,LOW);
  }
  
  
}