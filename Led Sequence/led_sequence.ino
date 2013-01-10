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
