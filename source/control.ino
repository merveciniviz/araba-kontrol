 
int gelen;
int Led1=11;
int Led2=10;
int Led3=9;
int Led4=6;

void setup() {

Serial.begin(9600);
pinMode(Led1,OUTPUT);
pinMode(Led2,OUTPUT);
pinMode(Led3,OUTPUT);
pinMode(Led4,OUTPUT);
}
void loop() 
{
  if(Serial.available() >0) 
    { 
      gelen = Serial.read();
      if(gelen == '1')//ileri(button 1)
      {
        digitalWrite(Led1,HIGH);
        digitalWrite(Led3,HIGH);
        
      }
      if(gelen == '2')//dur(button 2)
      {
        digitalWrite(Led1,LOW);
        digitalWrite(Led2,LOW);
        digitalWrite(Led3,LOW);
        digitalWrite(Led4,LOW);
      }
      if(gelen == '3')//geri git(button 3)
      {
        digitalWrite(Led2,HIGH);
        digitalWrite(Led4,HIGH);
      
      }
      if(gelen == '4')//sola dön(button 4)
      {
        digitalWrite(Led1,HIGH);
        delay(50);
        digitalWrite(Led3,HIGH);
        delay(200);
        
      }
      if (gelen=='5') //Sağa Dön (button 5)
     { digitalWrite(Led2,HIGH);
      
      digitalWrite(Led4,HIGH);
      
     }
}}



