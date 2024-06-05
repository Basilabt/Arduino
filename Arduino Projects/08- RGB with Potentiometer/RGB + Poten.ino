


#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9

#define POT_PIN A0


void setup() {
  
	pinMode(RED_PIN,OUTPUT);
  	pinMode(GREEN_PIN,OUTPUT);
    pinMode(BLUE_PIN,OUTPUT);
  
  	pinMode(POT_PIN,INPUT);
  
}



void loop() {
  
  int potValue = analogRead(POT_PIN);
  
  if(potValue >= 0 && potValue <= 50) {
    analogWrite(RED_PIN,0);
    analogWrite(GREEN_PIN,0);
    analogWrite(BLUE_PIN,0);
  }
  
   else if(potValue >= 51 && potValue <= 250) {
    analogWrite(RED_PIN,100);
    analogWrite(GREEN_PIN,0);
    analogWrite(BLUE_PIN,0);
  }
  
   else if(potValue >= 251 && potValue <= 400) {
    analogWrite(RED_PIN,0);
    analogWrite(GREEN_PIN,100);
    analogWrite(BLUE_PIN,0);
  }
  
  else if(potValue >= 401) {
    analogWrite(RED_PIN,0);
    analogWrite(GREEN_PIN,0);
    analogWrite(BLUE_PIN,100);
  }
   
 
  
  
}