


#define LED_PIN 11
#define IN_PIN A0


void setup() {
  
 pinMode(LED_PIN,OUTPUT);
 pinMode(IN_PIN,A0);
   
}


void loop() {
  
 int lightValue = analogRead(IN_PIN); 
 
  if(lightValue <= 50) {
    analogWrite(LED_PIN,0); 
  }
  
  else if(lightValue > 50 && lightValue < 150) {
    analogWrite(LED_PIN,110); 
  }
  
  else {
    analogWrite(LED_PIN,770); 
  }
  
  
}

