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
  digitalWrite(2, LOW);       //groen
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);      //rood
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);      //rood
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);       //rood
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);      //rood
  digitalWrite(11, LOW); 

  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH); 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(9, LOW); 
    digitalWrite(10, LOW); 
    digitalWrite(11, HIGH); 
  delay(5000);
  } 

  else { 
   digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  } 
  
  delay(1000);
  
  //2 op groen rest op rood
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
 
  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH); 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(9, LOW); 
    digitalWrite(10, LOW); 
    digitalWrite(11, HIGH); 
  delay(5000); 
  } 

  else { 
   digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH); 
  digitalWrite(11, LOW); 
  } 
   
  delay(1000);
  
  //3 op groen rest op rood
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  
  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH); 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(9, LOW); 
    digitalWrite(10, LOW); 
    digitalWrite(11, HIGH); 
 delay(5000); 
  } 

  else {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  }
  delay(1000);
  
  //4 op groen rest op rood
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  
  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, HIGH); 
    digitalWrite(3, LOW); 
    digitalWrite(4, HIGH); 
    digitalWrite(5, LOW); 
    digitalWrite(6, HIGH); 
    digitalWrite(7, LOW); 
    digitalWrite(8, HIGH); 
    digitalWrite(9, LOW); 
    digitalWrite(10, LOW); 
    digitalWrite(11, HIGH); 
  delay(5000);
  } 

  else {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  
  digitalWrite(8, LOW);
  digitalWrite(9, HIGH);
  
  digitalWrite(10, HIGH);
  digitalWrite(11, LOW);
  }
  delay(1000); 
}