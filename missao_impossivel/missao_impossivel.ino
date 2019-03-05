
const int pinoLDR = A0 ;
const int pinoBuzzer = 9 ;
const int pinoBotao = 8 ;

int leituraLDR = 0 ;
int leituraBotao ;

void setup() {
  // Inicia e configura a Serial
  Serial.begin(9600); // 9600bps

  pinMode(pinoLDR, INPUT) ;
  pinMode(pinoBuzzer, OUTPUT) ;
  pinMode(pinoBotao, INPUT_PULLUP) ;
}

void loop() {

  leituraLDR = analogRead(pinoLDR) ;
  leituraBotao = digitalRead(pinoBotao) ;


  // imprime valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leituraLDR);
  Serial.print("\t"); // tabulacao
  Serial.print("Botao: ");
  Serial.print(leituraBotao);  

  Serial.println(); // nova linha


  if(leituraLDR <= 970) {
    tone(pinoBuzzer, 1000) ;
  } else if(leituraBotao == LOW) {
    noTone(pinoBuzzer) ;
  }
  delay(100) ;

}
