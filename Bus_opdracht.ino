int KnopPin = 12;
int ToestandsKnop1 = 13; //knop 1 
int ToestandsKnop2 = 14; //knop 2 
void setup() {
  // put your setup code here, to run once:
  // kruispunt 1
  pinMode(2, OUTPUT); //rood
  pinMode(3, OUTPUT); //groen
  // kruispunt 2
  pinMode(4, OUTPUT); //rood
  pinMode(5, OUTPUT); //groen
  // kruispunt 3
  pinMode(6, OUTPUT); //rood
  pinMode(7, OUTPUT); //groen
  // kruispunt 4
  pinMode(8, OUTPUT); //rood
  pinMode(9, OUTPUT); //groen
 
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //weg 1 op groen rest op rood
  digitalWrite(2, LOW);     //weg 1 op groen
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);  //weg 2 op rood 
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);  //weg 3 op rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);


  //als er op de knop 1 gedrukt wordt, gaat alles op rood behalve lampje 1. 
  ToestandsKnop1 = digitalRead(KnopPin);
  if (ToestandsKnop1 == HIGH) {
    digitalWrite(2, LOW);   //weg 1 op groen
    digitalWrite(3, HIGH); 
    digitalWrite(4, HIGH);  //weg 2 op rood
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH);  //weg 3 op rood 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
    
  delay(5000);
  } 
//als je de knop weer los laat, wordt lampje 1 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, LOW);  //weg 1 op groen 
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);  //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);
  }
// als er op knop 2 gedrukt wordt, gaat alles op rood behalve lampje 2. 
  ToestandsKnop2 = digitalRead(KnopPin); 
  if (ToestandsKnop2 == HIGH) {
    digitalWrite(2,HIGH); //weg 1 op rood 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); //weg 2 op rood
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW); //weg 3 op groen 
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
  
  delay(5000); 
  }
  //als je de knop weer los laat, wordt lampje 2 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, HIGH);  //weg 1 op rood 
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);  //weg 2 op groen
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);

  } 
  
  delay(5000);
  
  //weg 2 op groen rest op rood
  digitalWrite(2, HIGH);  //weg 1 op rood
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW); //weg 2 op groen
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);

//als er op de knop 1 gedrukt wordt, gaat alles op rood behalve lampje 1. 
  ToestandsKnop1 = digitalRead(KnopPin);
  if (ToestandsKnop1 == HIGH) {
    digitalWrite(2, LOW);   //weg 1 op groen
    digitalWrite(3, HIGH); 
    digitalWrite(4, HIGH);  //weg 2 op rood
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH);  //weg 3 op rood 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
    
  delay(5000);
  } 
//als je de knop weer los laat, wordt lampje 1 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, LOW);  //weg 1 op groen 
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);  //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);
  }
// als er op knop 2 gedrukt wordt, gaat alles op rood behalve lampje 2. 
  ToestandsKnop2 = digitalRead(KnopPin); 
  if (ToestandsKnop2 == HIGH) {
    digitalWrite(2,HIGH); //weg 1 op rood 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); //weg 2 op rood
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW); //weg 3 op groen 
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
  
  delay(5000); 
  }
  //als je de knop weer los laat, wordt lampje 2 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, HIGH);  //weg 1 op rood 
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);  //weg 2 op groen
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);

  } 
   
  delay(5000);
  
  //3 op groen rest op rood
  digitalWrite(2, HIGH);  //weg 1 op rood 
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);  //weg 2 op rood 
  digitalWrite(5, LOW);
  
  digitalWrite(6, LOW);   //weg 3 op groen 
  digitalWrite(7, HIGH);
  
  digitalWrite(8, HIGH);    //weg 4 op rood 
  digitalWrite(9, LOW); 
 //als er op de knop 1 gedrukt wordt, gaat alles op rood behalve lampje 1. 
  ToestandsKnop1 = digitalRead(KnopPin);
  if (ToestandsKnop1 == HIGH) {
    digitalWrite(2, LOW);   //weg 1 op groen
    digitalWrite(3, HIGH); 
    digitalWrite(4, HIGH);  //weg 2 op rood
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH);  //weg 3 op rood 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
    
  delay(5000);
  } 
//als je de knop weer los laat, wordt lampje 1 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, LOW);  //weg 1 op groen 
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);  //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);
  }
// als er op knop 2 gedrukt wordt, gaat alles op rood behalve lampje 2. 
  ToestandsKnop2 = digitalRead(KnopPin); 
  if (ToestandsKnop2 == HIGH) {
    digitalWrite(2,HIGH); //weg 1 op rood 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); //weg 2 op rood
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW); //weg 3 op groen 
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
  
  delay(5000); 
  }
  //als je de knop weer los laat, wordt lampje 2 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, HIGH);  //weg 1 op rood 
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);  //weg 2 op groen
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);

  } 
  
  delay(5000);
  
  
  //4 op groen rest op rood
  digitalWrite(2, HIGH);  //weg 1 op rood 
  digitalWrite(3, LOW);
    
  digitalWrite(4, HIGH);    //weg 2 op rood 
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, LOW);   //weg 4 op groen 
  digitalWrite(9, HIGH);
//als er op de knop 1 gedrukt wordt, gaat alles op rood behalve lampje 1. 
  ToestandsKnop1 = digitalRead(KnopPin);
  if (ToestandsKnop1 == HIGH) {
    digitalWrite(2, LOW);   //weg 1 op groen
    digitalWrite(3, HIGH); 
    digitalWrite(4, HIGH);  //weg 2 op rood
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH);  //weg 3 op rood 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
    
  delay(5000);
  }
//als je de knop weer los laat, wordt lampje 1 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, LOW);  //weg 1 op groen 
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);  //weg 2 op rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);
  }
// als er op knop 2 gedrukt wordt, gaat alles op rood behalve lampje 2. 
  ToestandsKnop2 = digitalRead(KnopPin); 
  if (ToestandsKnop2 == HIGH) {
    digitalWrite(2,HIGH); //weg 1 op rood 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); //weg 2 op rood
    digitalWrite(5, LOW);  
    digitalWrite(6, LOW); //weg 3 op groen 
    digitalWrite(7, HIGH); 
    digitalWrite(8, HIGH); //weg 4 op rood 
    digitalWrite(9, LOW); 
  
  delay(5000); 
  }
  //als je de knop weer los laat, wordt lampje 2 groen en gaat de rest op rood. 
  else { 
   digitalWrite(2, HIGH);  //weg 1 op rood 
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);  //weg 2 op groen
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);  //weg 3 op rood 
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);  //weg 4 op rood 
  digitalWrite(9, LOW);

  }
 
   delay(5000); 
  
  }
  
  
  

