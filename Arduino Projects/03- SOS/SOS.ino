


#define LED_PIN 13
#define BUTTON_PIN 8


void setup() {
  
 pinMode(LED_PIN,OUTPUT); 
 pinMode(BUTTON_PIN,INPUT);
  
}



void loop() {
  
 	
  if(digitalRead(BUTTON_PIN) == HIGH) {
   
   	sendSOS();   	
    
  
  }else {
    digitalWrite(LED_PIN,LOW); 
  }
  
 
  
}


void sendSOS() {
  
     digitalWrite(LED_PIN,HIGH);
     delay(150);
     digitalWrite(LED_PIN,LOW);
     delay(150);
    
    
    
 
     digitalWrite(LED_PIN,HIGH);
     delay(500);
     digitalWrite(LED_PIN,LOW);
     delay(500);
     
    
    
     digitalWrite(LED_PIN,HIGH);
     delay(150);
     digitalWrite(LED_PIN,LOW);
     delay(150);
     
  
  	delay(1000);
  
  
}