int frequencia = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, OUTPUT) ;
}

void loop() {
  // put your main code here, to run repeatedly:
  tone(10, frequencia) ;
  delay(1000) ;
  noTone(10) ;
  delay(1000) ;
}
