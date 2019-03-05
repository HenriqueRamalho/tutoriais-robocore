
const int pinoLDR = A0; // sensor de luminosidade
const int pinoLedVermelho = 7 ; // LED Vermelho
const int pinoLedAmarelo = 6 ; // LED Amarelo
const int pinoLedVerde = 5 ; // LED Verde
int leitura = 0; // vlr que o sensor leu
float tensao = 0.0; // variável para armazenar a tensão do sensor

void setup() {
  // Inicia e configura a Serial
  Serial.begin(9600); // 9600bps
  
  pinMode(pinoLDR, INPUT) ;
  pinMode(pinoLedVermelho, OUTPUT) ;
  pinMode(pinoLedAmarelo, OUTPUT) ;
  pinMode(pinoLedVerde, OUTPUT) ;

}

void loop() {

  leitura = analogRead(pinoLDR) ;
  // imprime valor lido pelo arduino (0 a 1023)
  Serial.print("Leitura: ");
  Serial.print(leitura);
  Serial.print("\t"); // tabulacao

  // converte e imprime o valor em tensão elétrica
  tensao = leitura * 5.0 / 1023.0;
  Serial.print("Tensão: ");
  Serial.print(tensao);
  Serial.print("V");

  Serial.println(); // nova linha

  if(leitura > 0 && leitura < 333) {
    digitalWrite(pinoLedVermelho, HIGH) ;
    digitalWrite(pinoLedAmarelo, LOW) ;
    digitalWrite(pinoLedVerde, LOW) ;
  } else if(leitura > 333 && leitura < 666) {
    digitalWrite(pinoLedVermelho, LOW) ;
    digitalWrite(pinoLedAmarelo, HIGH) ;
    digitalWrite(pinoLedVerde, LOW) ;    
  } else if(leitura > 666 ) {  
    digitalWrite(pinoLedVermelho, LOW) ;
    digitalWrite(pinoLedAmarelo, LOW) ;
    digitalWrite(pinoLedVerde, HIGH) ; 
  } else {
    digitalWrite(pinoLedVermelho, LOW) ;
    digitalWrite(pinoLedAmarelo, LOW) ;
    digitalWrite(pinoLedVerde, LOW) ;    
  }
  delay(100) ;
}
