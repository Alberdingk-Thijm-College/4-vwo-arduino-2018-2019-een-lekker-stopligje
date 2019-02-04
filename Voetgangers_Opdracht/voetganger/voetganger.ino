int KnopPin = 12;
int ToestandsKnop = 13;


void setup() {
  // put your setup code here, to run once:
  // weg 1
  pinMode(2, OUTPUT); //rood
  pinMode(3, OUTPUT); //groen
  // weg 2
  pinMode(4, OUTPUT); //rood
  pinMode(5, OUTPUT); //groen
  // weg 3
  pinMode(6, OUTPUT); //rood
  pinMode(7, OUTPUT); //groen
  // weg 4
  pinMode(8, OUTPUT); //rood
  pinMode(9, OUTPUT); //groen
  //voetgangerspad
  pinMode(10, OUTPUT); //voetganger rood
  pinMode(11, OUTPUT); //voetganger groen
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //weg 1 op groen de rest op rood
  digitalWrite(2, LOW);       //weg 1 groen
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);      //weg 2 rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);      //weg 3 rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);       //weg 4 rood
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);      //voetgangerspad rood
  digitalWrite(11, LOW); 
  
//als knop aanstaat dan moet het voetgangerspad op groen en de rest op rood.
  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, HIGH);       //weg 1 rood
    digitalWrite(3, LOW); 
    
    digitalWrite(4, HIGH);       //weg 2 rood
    digitalWrite(5, LOW); 
    
    digitalWrite(6, HIGH);       //weg 3 rood
    digitalWrite(7, LOW); 
    
    digitalWrite(8, HIGH);       //weg 4 rood
    digitalWrite(9, LOW); 
    
    digitalWrite(10, LOW);       //voetgangers groen
    digitalWrite(11, HIGH); 
  delay(5000);
  } 
//als de knop niet is ingedrukt blijft het voetgangerslicht op rood staan.
  else { 
   digitalWrite(2, LOW);        //weg 1 op groen
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);        //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);        //weg 3 op rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);        //weg 4 op rood
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);         //voetgangerspad op rood
  digitalWrite(11, LOW); 
  } 
  
  delay(5000);
  
  //weg2 op groen rest op rood
  digitalWrite(2, HIGH);        //weg 1 op rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);        //weg 2 op rood
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);        //weg 3 op rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);        //weg 4 op rood
  digitalWrite(9, LOW);

  digitalWrite(10,HIGH);        //voetgangerspad op rood
  digitalWrite(11,LOW);
  
 //als knop aanstaat dan moet het voetgangerspad op groen en de rest op rood.
  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, HIGH);         //weg 1 op rood
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH);         //weg 2 op rood
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH);         //weg 3 op rood
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH);         //weg 4 op rood
    digitalWrite(9, LOW); 
    digitalWrite(10, LOW);         //voetgangerspad op rood
    digitalWrite(11, HIGH); 
  delay(5000); 
  } 
//als de knop niet is ingedrukt blijft het voetgangerslicht op rood staan.
  else { 
   digitalWrite(2, HIGH);        //weg 1 op rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);        //weg 2 op rood
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);        //weg 3 op rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);        //weg 4 op rood
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);         //voetgangerspad op rood
  digitalWrite(11, LOW); 
  } 
   
  delay(5000);
  
  //weg 3 op groen de rest op rood
  digitalWrite(2, HIGH);        //weg 1 op rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);        //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, LOW);        //weg 3 op rood
  digitalWrite(7, HIGH);
  
  digitalWrite(8, HIGH);        //weg 4 op rood
  digitalWrite(9, LOW);
  
  digitalWrite(10, HIGH);        //voetgangerspad op rood
  digitalWrite(11, LOW);
  
  //als knop aanstaat dan moet het voetgangerspad op groen en de rest op rood.
  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, HIGH);         //weg 1 op rood
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH);         //weg 2 op rood
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH);         //weg 3 op rood
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH);         //weg 4 op rood
    digitalWrite(9, LOW); 
    digitalWrite(10, LOW);         //voetgangerspad op rood
    digitalWrite(11, HIGH); 
 delay(5000); 
  } 
//als de knop niet is ingedrukt blijft het voetgangerslicht op rood staan.
  else {
  digitalWrite(2, HIGH);        //weg 1 op rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);        //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, LOW);        //weg 3 op groen
  digitalWrite(7, HIGH);
  
  digitalWrite(8, HIGH);        //weg 4 op rood
  digitalWrite(9, LOW);
  
  digitalWrite(10, HIGH);        //voetgangerspad op rood
  digitalWrite(11, LOW);
  }
  delay(5000);
  
  //weg 4 op groen de rest op rood
  digitalWrite(2, HIGH);        //weg 1 op rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);        //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);        //weg 3 op rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, LOW);        //weg 4 op groen
  digitalWrite(9, HIGH);
  
  digitalWrite(10, HIGH);        //voetgangerspad op rood
  digitalWrite(11, LOW);
  
  //als knop aanstaat dan moet het voetgangerspad op groen en de rest op rood.
  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    
    digitalWrite(2, HIGH);         //weg 1 op rood
    digitalWrite(3, LOW); 
    
    digitalWrite(4, HIGH);         //weg 2 op rood
    digitalWrite(5, LOW); 
    
    digitalWrite(6, HIGH);         //weg 3 op rood
    digitalWrite(7, LOW); 
    
    digitalWrite(8, HIGH);         //weg 4 op rood
    digitalWrite(9, LOW); 
    
    digitalWrite(10, LOW);         //voetgangerspad op groen
    digitalWrite(11, HIGH); 
  delay(5000);
  } 
//als de knop niet is ingedrukt blijft het voetgangerslicht op rood staan.
  else {
  digitalWrite(2, HIGH);        //weg 1 op rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);        //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);       //weg 3 op rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, LOW);        //weg 4 op groen
  digitalWrite(9, HIGH);
  
  digitalWrite(10, HIGH);       //voetgangerspad op rood
  digitalWrite(11, LOW);
  }
  delay(5000); 
}
