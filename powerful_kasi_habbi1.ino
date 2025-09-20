// C++ code
//
void setup()
{
 pinMode(11, OUTPUT);
 pinMode(10, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(3, OUTPUT);
  
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) ligado
  digitalWrite(11, LOW);
  delay(1000); // Wait for 1000 millisecond(s)desligad
  
   digitalWrite(10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) ligado
  digitalWrite(10, LOW);
  delay(1000); // Wait for 1000 millisecond(s)desligad
  
   digitalWrite(9, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) ligado
  digitalWrite(9, LOW);
  delay(1000); // Wait for 1000 millisecond(s)desligad
  
   digitalWrite(6, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) ligado
  digitalWrite(6, LOW);
  delay(1000); // Wait for 1000 millisecond(s)desligad
  
   digitalWrite(3, HIGH);
  delay(1000); // Wait for 1000 millisecond(s) ligado
  digitalWrite(3, LOW);
  delay(1000); // Wait for 1000 millisecond(s)desligad
}



