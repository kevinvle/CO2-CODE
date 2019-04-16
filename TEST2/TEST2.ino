/* int ENA=5; */
int IN1=3;
int IN2=5;
/* int ENB=10; */ 
void setup()
{
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
 /* pinMode(ENA,OUTPUT); 
   pinMode(ENB,OUTPUT);
  digitalWrite(ENA,HIGH);  
  digitalWrite(ENB,HIGH);   */   

}
void loop()
{
  
  digitalWrite(IN1,HIGH); 
  digitalWrite(IN2,HIGH); 
  delay(1000); 
  digitalWrite(IN1,LOW);     
  digitalWrite(IN2,LOW);
  delay(1000);

}

