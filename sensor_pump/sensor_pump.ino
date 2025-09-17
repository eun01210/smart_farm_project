int IN1=7;
int IN2=6;

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    StartA();
}

void StartA() {
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);
}


void StopA(){
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
}
