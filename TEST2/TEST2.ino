/* int ENA=5; */
int IN1=3;
/* int ENB=10; */ 
void setup()
{
  pinMode(IN1,OUTPUT);
 /* pinMode(ENA,OUTPUT); 
   pinMode(ENB,OUTPUT);
  digitalWrite(ENA,HIGH);  
  digitalWrite(ENB,HIGH);   */   

}
void loop()
{
  
  digitalWrite(IN1,HIGH);  
  delay(1000); 
  digitalWrite(IN1,LOW);     
  delay(500);

}

