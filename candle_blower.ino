const int motorPin = 3;
const int speed = 100;

const int flamePin = 6;
int Flame;

void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  pinMode(flamePin, INPUT);
} 
 
void loop() 
{
  Flame = digitalRead(flamePin);
  if (Flame == LOW)
  {
    delay(2000);
    analogWrite(motorPin, 200);
  } else {
    delay(2000);
    analogWrite(motorPin, 0);  
  }
}
