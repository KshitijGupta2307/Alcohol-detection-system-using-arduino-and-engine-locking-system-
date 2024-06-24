#define gas 5
#define relay 7
#define buzzer 13
void setup() 
{
  Serial.begin(9600);  
  pinMode(buzzer,OUTPUT);
  pinMode(gas,INPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
  delay(1000);  
}

void loop() 
{
 int alc=digitalRead(gas);
 if(alc==HIGH)
 {
    digitalWrite(relay,LOW);
    Serial.println("Alcohol Not Detected!!!!");
    digitalWrite(buzzer, LOW);
    delay(2000);  
 }
 else
 {
  digitalWrite(relay,HIGH);
  Serial.println("Alcohol Detected!!!!");
  digitalWrite(buzzer, HIGH);
  delay(5000);
}
}
