// C++ code
//
int input = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  input = 2;
  Serial.print(input);

  analogRead(A0);

  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(5, HIGH);
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(11, LOW);
  digitalWrite(5, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}