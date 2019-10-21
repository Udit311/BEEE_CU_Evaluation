const int lamp = 7;
void setup()
{
  Serial.begin(9600);
  pinMode(lamp,OUTPUT);
  pinMode(10,INPUT);
}
void loop()
{
  
  
  if(digitalRead(10)==HIGH)
{
  
  
for(int i=1;i>0;i++)
{
  int c = analogRead(A0);
  delay(500);
  if(c<300)
  {
    digitalWrite(lamp,HIGH);
    delay(100);
  }
  else
  {
    
    digitalWrite(lamp,LOW);
   
  }   
  }
  }
  

}