//By Cesar Gaitan
//mrebola.com

int led = 0;
  void setup(){
    for(int i = 10; i<=12; i++){
      led = i;
      pinMode(led,OUTPUT);
    }
  }
  
  void loop(){
    for(int i = 10; i<=12; i++){
    led = i;  
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
    }
  }

/*
Same as:

int led = 10;
int led1 = 11;
int led2 = 12;
void setup() {                
  pinMode(led, OUTPUT);     
  pinMode(led1, OUTPUT);     
  pinMode(led2, OUTPUT);  
  pinMode(led3, OUTPUT);       
}
int i=0;
void loop() {
  for(i; i<1; i++){
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second

  digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led1, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second

  digitalWrite(led2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);  

  }
}
*/
