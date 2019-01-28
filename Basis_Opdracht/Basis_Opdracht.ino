int KnopPin = 12;
int ToestandsKnop = 13;


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
  pinMode(10, OUTPUT); //voetganger rood
  pinMode(11, OUTPUT); //voetganger groen
  

}

void loop() {
  // put your main code here, to run repeatedly:
  
  //1 op groen rest op rood
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
  
  digitalWrite(8, HIGH);
  digitalWrite(9, LOW);

  ToestandsKnop = digitalRead(KnopPin);
  if (ToestandsKnop == HIGH) {
    digitalWrite(2, LOW); 
    digitalWrite(3, LOW); 
    digitalWrite(4, LOW); 
    digitalWrite(5, LOW); 
    digitalWrite(6, LOW); 
    digitalWrite(7, LOW); 
    digitalWrite(8, LOW); 
    digitalWrite(9, LOW); 

  delay(100000);
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
  
  delay(1000); 
}
