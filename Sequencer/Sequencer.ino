/*
 * An Arduino Sequencer
 * Author: Pablo Lago https://github.com/L4g0
 * 
 * 
 * 
 * Last update: 31/01/2018
 * 
  */

//Setting the pin for each step
int seq1 = 6;
int seq2 = 7;
int seq3 = 8;
int seq4 = 9;
int seq5 = 10;
int seq6 = 11;
int seq7 = 12;
int seq8 = 13;

/*tempo is initialized at 500, but it will change depending on 
the potentiometer connected in A0*/
int tempo = 500;


void setup() {
  pinMode(seq1, OUTPUT);
  pinMode(seq2, OUTPUT);
  pinMode(seq3, OUTPUT);
  pinMode(seq4, OUTPUT);
  pinMode(seq5, OUTPUT);
  pinMode(seq6, OUTPUT);
  pinMode(seq7, OUTPUT);
  pinMode(seq8, OUTPUT);
  pinMode(A0, INPUT); //Tempo control potentiometer pin
  Serial.begin(9600);

}

void loop() {
  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq1, HIGH);
  delay(tempo);
  digitalWrite(seq1, LOW);

  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq2, HIGH);
  delay(tempo);
  digitalWrite(seq2, LOW);

  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq3, HIGH);
  delay(tempo);
  digitalWrite(seq3, LOW);

  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq4, HIGH);
  delay(tempo);
  digitalWrite(seq4, LOW);

  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq5, HIGH);
  delay(tempo);
  digitalWrite(seq5, LOW);

  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq6, HIGH);
  delay(tempo);
  digitalWrite(seq6, LOW);

  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq7, HIGH);
  delay(tempo);
  digitalWrite(seq7, LOW);

  tempo = analogRead(A0);
  Serial.println(tempo);
  digitalWrite(seq8, HIGH);
  delay(tempo);
  digitalWrite(seq8, LOW);

}
