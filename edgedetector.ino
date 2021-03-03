int mtra = 6;
int mtrb = 7 ; // left=motor1 right=motor2
int mtrx = 8;
int mtry = 9; //motor 2
int irleft = 12;
int irleftvcc = 2;
int irrightvcc = 3;
int irright = 11;
void setup() {
  pinMode(irleft, INPUT);
  pinMode(irright, INPUT);
  pinMode(mtra, OUTPUT);
  pinMode(mtrb, OUTPUT);
  pinMode(mtrx, OUTPUT);
  pinMode(mtry, OUTPUT);
  pinMode(irleftvcc, OUTPUT);
  pinMode(irrightvcc, OUTPUT);
  digitalWrite(irleftvcc, HIGH);
  digitalWrite(irrightvcc, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if ((digitalRead(irright) == 0) && (digitalRead(irleft) == 0)) 
  { motor1clockwise();
  motor2clockwise();
  delay(500);
    stopmotor2(); // turn right
    motor1anticlockwise();
    delay(500);
  }
 
  else {
    motor1anticlockwise();
    motor2anticlockwise();
  }

}
void stopmotor2()
{
  digitalWrite(mtrx, HIGH);
  digitalWrite(mtry, HIGH);
}
void stopmotor1()
{
  digitalWrite(mtra, HIGH);
  digitalWrite(mtrb, HIGH);

}
void motor1clockwise() {
  digitalWrite(mtra, HIGH);
  digitalWrite(mtrb, LOW);
  }

void motor1anticlockwise() {
  digitalWrite(mtra, LOW);
  digitalWrite(mtrb, HIGH);
}
void motor2clockwise() {
  digitalWrite(mtrx, HIGH);
  digitalWrite(mtry, LOW);
  }
void motor2anticlockwise() {
  digitalWrite(mtrx, LOW);
  digitalWrite(mtry, HIGH);
} 
