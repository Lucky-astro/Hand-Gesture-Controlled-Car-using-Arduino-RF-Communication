void setup() 
{
Serial.begin(9600);
pinMode(8,OUTPUT);pinMode(9,OUTPUT);pinMode(10,OUTPUT);pinMode(11,OUTPUT);
}

void loop() 
{
int x=analogRead(A0);int y=analogRead(A1);
Serial.print("X:");Serial.print(x);Serial.println("");
Serial.print("Y:");Serial.print(y);Serial.println("");



if(x<300)
{
Serial.println("BACKWARD");
digitalWrite(8,0);digitalWrite(9,1);digitalWrite(10,0);digitalWrite(11,0);
}

else if(x>350)
{
Serial.println("FORWARD");
digitalWrite(8,1);digitalWrite(9,0);digitalWrite(10,0);digitalWrite(11,0);
}

else if(y>350)
{
Serial.println("RIGHT");
digitalWrite(8,0);digitalWrite(9,0);digitalWrite(10,0);digitalWrite(11,1);
}

else if(y<300)
{
Serial.println("LEFT");
digitalWrite(8,0);digitalWrite(9,0);digitalWrite(10,1);digitalWrite(11,0);
}

else
{
Serial.println("STOP");
digitalWrite(8,0);digitalWrite(9,0);digitalWrite(10,0);digitalWrite(11,0);
}

delay(1000);
}
