// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
}

int distance(int trigPin,int echoPin)
{
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  int t=pulseIn(echoPin,HIGH);
  int d=t*0.0344/2;
  return d;
}
void loop()
{
  int dis=distance(11,12);
  Serial.println(dis);
 digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(6,HIGH);
   digitalWrite(7,LOW);
  if(dis<=20)
  {
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    delay(20);
  }
}
