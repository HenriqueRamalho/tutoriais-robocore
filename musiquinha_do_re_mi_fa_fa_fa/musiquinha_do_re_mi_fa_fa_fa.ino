
const int pino_buzzer = 10;

// frequencias das notas musicais
const int c = 261 ;
const int d = 293 ;
const int e = 329 ;
const int f = 349 ;
const int g = 391 ;
const int a = 440 ;
const int b = 493 ;

void setup() { 
  pinMode(pino_buzzer, OUTPUT) ;
}

void loop() {

  // toca a nota Dó por 1 segundo
  tone(pino_buzzer, c) ;
  delay(250) ;

  // toca a nota Ré por 1 segundo 
  tone(pino_buzzer, d) ;
  delay(250) ;
  
  // toca a nota Mi por 1 segundo
  tone(pino_buzzer, e) ;
  delay(250) ;
  
  // Toca a nota Fá por 1 segundo
  tone(pino_buzzer, f);
  delay(250);

  noTone(pino_buzzer);
  delay(250);   

  

  // Toca a nota Fá por 1 segundo
  tone(pino_buzzer, f);
  delay(125);  

  noTone(pino_buzzer);
  delay(125);    

  // Toca a nota Fá por 1 segundo
  tone(pino_buzzer, f);
  delay(125);


  // Desliga o Buzzer por 2 segundos
  noTone(pino_buzzer);
  delay(2000);   
}
