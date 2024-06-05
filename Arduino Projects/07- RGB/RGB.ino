

#define RED_PIN 11
#define GREEN_PIN 10
#define BLUE_PIN 9


void setup() {
  
  pinMode(RED_PIN,OUTPUT);
  pinMode(GREEN_PIN,OUTPUT);
  pinMode(BLUE_PIN,OUTPUT);
  
}


void loop() {
  showRGBColors();
}

void showRGBColors() {
  
  analogWrite(RED_PIN,0);
  analogWrite(GREEN_PIN,0);
  analogWrite(BLUE_PIN,0);
  delay(2000);
  
  
    
  analogWrite(RED_PIN,100);
  analogWrite(GREEN_PIN,0);
  analogWrite(BLUE_PIN,0);
  delay(2000);
  
  
    
  analogWrite(RED_PIN,0);
  analogWrite(GREEN_PIN,100);
  analogWrite(BLUE_PIN,0);
  delay(2000);
  
    
  analogWrite(RED_PIN,0);
  analogWrite(GREEN_PIN,0);
  analogWrite(BLUE_PIN,100);
  delay(2000);
  
}