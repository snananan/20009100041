void setup()
{
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  for(int i=4;i<=11;i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
  pinMode(2,INPUT);
  digitalWrite(2,LOW);
}
void circle(){
  digitalWrite(4,HIGH);digitalWrite(5,LOW);
  digitalWrite(6,LOW);digitalWrite(7,LOW); delay(1000);
  if(digitalRead(2)){
    loop();
  }
   digitalWrite(4,LOW);digitalWrite(5,HIGH);
  digitalWrite(6,LOW);digitalWrite(7,LOW); delay(1000);
  if(digitalRead(2)){
    
    loop();
  }
  digitalWrite(4,HIGH);digitalWrite(5,HIGH);
  digitalWrite(6,LOW);digitalWrite(7,LOW); delay(1000);
  if(digitalRead(2)){
   
    loop();
  }
   digitalWrite(4,LOW);digitalWrite(5,LOW);
  digitalWrite(6,HIGH);digitalWrite(7,LOW); delay(1000); 
 if(digitalRead(2)){
   
    loop();
  }
   digitalWrite(4,HIGH);digitalWrite(5,LOW);
  digitalWrite(6,HIGH);digitalWrite(7,LOW); delay(1000);
  if(digitalRead(2)){
   
    loop();
  }
   digitalWrite(4,LOW);digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);digitalWrite(7,LOW); delay(1000);
 if(digitalRead(2)){
   
    loop();
  }
   digitalWrite(4,HIGH);digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);digitalWrite(7,LOW); delay(1000);
 if(digitalRead(2)){
   
    loop();
  }
   digitalWrite(4,LOW);digitalWrite(5,LOW);
  digitalWrite(6,LOW);digitalWrite(7,HIGH); delay(1000);
  if(digitalRead(2)){
    
    loop();
  }
   digitalWrite(4,HIGH);digitalWrite(5,LOW);
  digitalWrite(6,LOW);digitalWrite(7,HIGH); delay(1000); 
  if(digitalRead(2)){
    loop();
  }
  digitalWrite(4,LOW);digitalWrite(5,LOW);
  digitalWrite(6,LOW);digitalWrite(7,LOW); 
  if(digitalRead(2)){
    loop();
  } 
  
  
}
void loop()
{
  digitalWrite(8,LOW);digitalWrite(9,LOW);
  digitalWrite(10,LOW);digitalWrite(11,LOW);
  
  digitalWrite(4,LOW);digitalWrite(5,LOW);
  digitalWrite(6,LOW);digitalWrite(7,LOW); delay(1000);
 circle();
 digitalWrite(8,HIGH);digitalWrite(9,LOW); 
  digitalWrite(10,LOW);digitalWrite(11,LOW);delay(1000);
 circle();
 digitalWrite(8,LOW);digitalWrite(9,HIGH);
  digitalWrite(10,LOW);digitalWrite(11,LOW); delay(1000);
 circle();
 digitalWrite(8,HIGH);digitalWrite(9,HIGH);
  digitalWrite(10,LOW);digitalWrite(11,LOW); delay(1000);
 circle();
 digitalWrite(8,LOW);digitalWrite(9,LOW);
  digitalWrite(10,HIGH);digitalWrite(11,LOW); delay(1000); 
 circle();
  digitalWrite(8,HIGH);digitalWrite(9,LOW);
  digitalWrite(10,HIGH);digitalWrite(11,LOW); delay(1000);
  circle();
 digitalWrite(8,LOW);digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);digitalWrite(11,LOW); delay(1000);
 circle();
 digitalWrite(8,HIGH);digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);digitalWrite(11,LOW); delay(1000);
 circle();
 digitalWrite(8,LOW);digitalWrite(9,LOW);
  digitalWrite(10,LOW);digitalWrite(11,HIGH); delay(1000);
   circle();
 digitalWrite(8,HIGH);digitalWrite(9,LOW);
  digitalWrite(10,LOW);digitalWrite(11,HIGH); delay(1000);
 circle();
  digitalWrite(8,LOW);digitalWrite(9,LOW);
  digitalWrite(10,LOW);digitalWrite(11,LOW); delay(1000);
 
}
