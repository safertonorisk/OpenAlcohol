#include <NewPing.h>
NewPing sens(8,7,20); // sens(trig,echo,max_distance)
void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int dist = sens.ping_cm();
  
  if(dist<15&&dist!=0){
    digitalWrite(2,HIGH);
    delay(200);
  }
  else{
    digitalWrite(2,LOW);
    }
}
