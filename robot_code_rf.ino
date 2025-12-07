void setup() 
{
  Serial.begin(9600);

  pinMode(12, INPUT);
  pinMode(13, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() 
{
  int A = digitalRead(12);
  int B = digitalRead(13);
  int C = digitalRead(10);
  int D = digitalRead(11);
Serial.print(A);Serial.print(B);Serial.print(C);Serial.print(D);Serial.println("");
  if (A == 1)
  {
    digitalWrite(4, 1); 
    digitalWrite(5, 0); 
    digitalWrite(6, 1); 
    digitalWrite(7, 0);
  }
  else if (B == 1)
  {
    digitalWrite(4, 0); 
    digitalWrite(5, 1); 
    digitalWrite(6, 0); 
    digitalWrite(7, 1);
  }
  else if (C == 1)
  {
    digitalWrite(4, 1); 
    digitalWrite(5, 0); 
    digitalWrite(6, 0); 
    digitalWrite(7, 0);
  }
  else if (D == 1)
  {
    digitalWrite(4, 0); 
    digitalWrite(5, 0); 
    digitalWrite(6, 0); 
    digitalWrite(7, 1);
  }
  else
  {
    digitalWrite(4, 0);
    digitalWrite(5, 0);
    digitalWrite(6, 0);
    digitalWrite(7, 0);
  }

  delay(20); // small debounce delay
}
