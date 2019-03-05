
int flag = 0 ;
int bolso = false ;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, INPUT) ;
  pinMode(12, OUTPUT) ;

  
}

void loop() {
  // put your main code here, to run repeatedly:
 


  
 
  if(digitalRead(9) == HIGH) {
    digitalWrite(12, HIGH) ;
  } else {
    digitalWrite(12, LOW) ;
  }
  
}
