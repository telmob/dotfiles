void setup() {
  // put your setup code here, to run once:
  pinMode(0, OUTPUT); //Pedestre VERMELHO
  pinMode(1, OUTPUT); //Pedestre VERDE

  pinMode(3, OUTPUT); //Semáforo1 VERDE
  pinMode(4, OUTPUT); //Semáforo1 AMARELO
  pinMode(5, OUTPUT); //Semáforo1 VERMELHO
  
  pinMode(8, OUTPUT); //Semáforo2 VERDE
  pinMode(9, OUTPUT); //Semáforo2 AMARELO
  pinMode(10, OUTPUT); //Semáforo2 VERMELHO

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(8, HIGH);// Liga Semáforo2 VERDE
  digitalWrite(5, HIGH);// Liga Semáforo1 VERMELHO
  digitalWrite(0, HIGH);// Liga Pedestre VERMELHO
  delay(2000);
  digitalWrite(8, LOW);// Desliga Semáforo2 VERDE
  digitalWrite(9, HIGH);// Liga Semáforo2 AMARELO
  delay(1500);
  digitalWrite(9, LOW);// Desliga Semáforo2 AMARELO

  digitalWrite(10, HIGH);// Liga Semáforo2 VERMELHO
  digitalWrite(0, LOW);// Desliga Pedestre VERMELHO
  digitalWrite(1, HIGH);// Liga Pedestre VERDE
  delay(2000);

  digitalWrite(0, HIGH);// Liga Pedestre VERMELHO
  delay(500);
  digitalWrite(0, LOW);// Desliga Pedestre VERMELHO
  delay(500);
  digitalWrite(0, HIGH);// Liga Pedestre VERMELHO
  delay(500);
  digitalWrite(0, LOW);// Desliga Pedestre VERMELHO
  delay(500);
  digitalWrite(0, HIGH);// Liga Pedestre VERMELHO
  delay(500);
  digitalWrite(0, LOW);// Desliga Pedestre VERMELHO
  digitalWrite(1, LOW);// Desliga Pedestre VERDE
  digitalWrite(10, LOW);// Desliga Semáforo2 VERMELHO

}
