



#define LED_PIN 13



void setup() {
  
  pinMode(LED_PIN,OUTPUT); 
  pinMode(A0,INPUT);
  
  
}
          
          
void loop() {
  
 int potValue = analogRead(A0); 
  
 int ledBrightness = map(potValue,0,1023,0,255);
  
 analogWrite(LED_PIN,ledBrightness);
  
}
            
            
            
            
