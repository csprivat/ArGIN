/*
 Peugeot 106 - Gear Indicator
 Coded by Cristian Privat - privat.tecnologia@gmail.com
 License: CC-BY-SA 3.0
 Alpha Version - 17/05/2015
 Beta Version 0.1 - 24/06/2015
 Beta Version 0.2 - 28/06/2015
 Release Candidate 0.9 - 09/07/2015
*/

// define as variaveis
  const int pushPrimeira = A1;
  const int pushSegunda = A2;
  const int pushTerceira = A3;
  const int pushQuarta = A4;
  const int pushQuinta = A5;
  
  int val1 = 0;
  int val2 = 0;
  int val3 = 0;
  int val4 = 0;
  int val5 = 0;

void setup() {
  // configura as portas utilizadas pelos switches como entrada 'INPUT'
  pinMode(pushPrimeira, INPUT);
  pinMode(pushSegunda, INPUT);
  pinMode(pushTerceira, INPUT);
  pinMode(pushQuarta, INPUT);
  pinMode(pushQuinta, INPUT);

  // configura as portas digitais como saida 'OUTPUT'
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, 0); // desliga o ponto do display

}

void loop() {
 val1 = digitalRead(pushPrimeira);
 val2 = digitalRead(pushSegunda);
 val3 = digitalRead(pushTerceira);
 val4 = digitalRead(pushQuarta);
 val5 = digitalRead(pushQuinta);
 
   if (val1 == HIGH) {
      // primeira '1'
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      //delay(1000);
   } 
     
    else if (val2 == HIGH) {
      // segunda '2'
       digitalWrite(2, 0);
       digitalWrite(3, 0);
       digitalWrite(4, 1);
       digitalWrite(5, 0);
       digitalWrite(6, 0);
       digitalWrite(7, 1);
       digitalWrite(8, 0);
       //delay(1000);
    }
    
    else if (val3 == HIGH) {
       // terceira '3'
      digitalWrite(2, 0);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
      digitalWrite(5, 0);
      digitalWrite(6, 1);
      digitalWrite(7, 1);
      digitalWrite(8, 0);
    }
    
    else if (val4 == HIGH) {
        // quarta '4'
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
      digitalWrite(5, 1);
      digitalWrite(6, 1);
      digitalWrite(7, 0);
      digitalWrite(8, 0);
    }
    
    else if (val5 == HIGH) {
       // quinta '5'
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 0);
      digitalWrite(5, 0);
      digitalWrite(6, 1);
      digitalWrite(7, 0);
      digitalWrite(8, 0);
    }
    
  else {
      // neutro '0'
      digitalWrite(2, 0);
      digitalWrite(3, 0);
      digitalWrite(4, 0);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 1);
      //delay(1000);
  }
}
/*  
  // exibe as marchas no display
  // neutro '0'
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  digitalWrite(8, 1);
  delay(1000);

  // primeira '1'
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 1);
  delay(1000);
  
  // segunda '2'
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  delay(1000);
  
  // terceira '3'
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
  delay(1000);
  
  // primeira '4'
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 0);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  delay(1000);
  
  // quinta '5'
  digitalWrite(2, 0);
  digitalWrite(3, 1);
  digitalWrite(4, 0);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 0);
  digitalWrite(8, 0);
  delay(1000);

}

*/
