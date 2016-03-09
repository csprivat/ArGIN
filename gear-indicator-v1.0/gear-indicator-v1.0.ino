/*
 AGIn - ARDUINO Gear Indicator
 
 Copyright 2015, Cristian Privat (privat.tecnologia@gmail.com)
 
 This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 Versions:
 
    Alpha Version - 17/05/2015
    Beta Version 0.1 - 24/06/2015
    Beta Version 0.2 - 28/06/2015
    Release Candidate 0.9 - 09/07/2015
    Release Candidate 1 - 27/09/2015: Optimized code to display 7-seg Common Anode (LOW state)
    Release Candidate 2 - 25/10/2015: Optimized code to hall sensor A3144
    Release Candidate 3 - 09/01/2016: Migrated to Arduino Nano 3.0 (chip CH340)
    Version 1.0 - 16/01/2016: Minor display code adjusts 
*/

// set variables
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
 
  // configure the ports (A1 to A5) used by switches (hall sensors) as input 'INPUT'
  pinMode(pushPrimeira, INPUT);
  pinMode(pushSegunda, INPUT);
  pinMode(pushTerceira, INPUT);
  pinMode(pushQuarta, INPUT);
  pinMode(pushQuinta, INPUT);

  // configure ports used as output 'OUTPUT' (Display)
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(9, 0); // turn off display point

}

void loop() {
 val1 = digitalRead(pushPrimeira);
 val2 = digitalRead(pushSegunda);
 val3 = digitalRead(pushTerceira);
 val4 = digitalRead(pushQuarta);
 val5 = digitalRead(pushQuinta);
 
   if (val1 == LOW) {
      // first gear '1'
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 0);
      //delay(1000);
   } 
     
 
    else if (val2 == LOW) {
      // second gear '2'
       digitalWrite(2, 1);
       digitalWrite(3, 1);
       digitalWrite(4, 0);
       digitalWrite(5, 1);
       digitalWrite(6, 1);
       digitalWrite(7, 0);
       digitalWrite(8, 1);
       //delay(1000);
    }
    
    else if (val3 == LOW) {
       // third gear '3'
      digitalWrite(2, 1);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 0);
      digitalWrite(7, 0);
      digitalWrite(8, 1);
      //delay(1000);
    }
    
    else if (val4 == LOW) {
        // fourth gear '4'
      digitalWrite(2, 0);
      digitalWrite(3, 1);
      digitalWrite(4, 1);
      digitalWrite(5, 0);
      digitalWrite(6, 0);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      //delay(1000);
    }
    
    else if (val5 == LOW) {
       // fifth gear '5'
      digitalWrite(2, 1);
      digitalWrite(3, 0);
      digitalWrite(4, 1);
      digitalWrite(5, 1);
      digitalWrite(6, 0);
      digitalWrite(7, 1);
      digitalWrite(8, 1);
      //delay(1000);
    }
    
  else {
      // neutral '-'
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
  // reference code to Common Cathode 7Seg Display
  // neutro '0'
  digitalWrite(2, 1);
  digitalWrite(3, 1);
  digitalWrite(4, 1);
  digitalWrite(5, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  digitalWrite(8, 0);
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
  
  // quarta '4'
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
