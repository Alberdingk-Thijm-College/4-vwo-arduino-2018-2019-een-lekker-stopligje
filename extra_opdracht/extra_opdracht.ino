int Speaker = 10;
void setup() {
  // weg 1
  pinMode(2, OUTPUT); //het rode licht
  pinMode(3, OUTPUT); //het groene licht
  // weg 2
  pinMode(4, OUTPUT); //het rode licht
  pinMode(5, OUTPUT); //het groene licht
  // weg 3
  pinMode(6, OUTPUT); //het rode licht
  pinMode(7, OUTPUT); //het groene licht
  // weg 4
  pinMode(8, OUTPUT); //het rode licht
  pinMode(9, OUTPUT); //het groene licht

}

void loop() {
  
  //weg 1 op groen de rest op rood
  digitalWrite(2, LOW);         //groen
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);        //rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);        //rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);        //rood
  digitalWrite(9, LOW);
  
  delay(4000);                  // de speaker gaat aan en uit om het duidelijk te maken dat het stoplicht op rood gaat
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
  
  //2 op groen rest op rood
  digitalWrite(2, HIGH);        //rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);         //groen
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);        //rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);        //rood
  digitalWrite(9, LOW);
  
  delay(4000);                  // de speaker gaat aan en uit om het duidelijk te maken dat het stoplicht op rood gaat
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
  
  //3 op groen rest op rood
  digitalWrite(2, HIGH);        //rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);        //rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, LOW);         //groen
  digitalWrite(7, HIGH);
  
  digitalWrite(8, HIGH);        //rood
  digitalWrite(9, LOW);
  
  delay(4000);                  // de speaker gaat aan en uit om het duidelijk te maken dat het stoplicht op rood gaat
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
  
  //4 op groen rest op rood
  digitalWrite(2, HIGH);        //rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);        //rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);        //rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, LOW);         //groen
  digitalWrite(9, HIGH);
  
  delay(4000);                  // de speaker gaat aan en uit om het duidelijk te maken dat het stoplicht op rood gaat
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
  tone(Speaker, 400); 
  delay(250);
  noTone(Speaker);
  delay(250);
}
