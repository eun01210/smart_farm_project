#include <Servo.h>
Servo myservo;

int IN1 = 7;
int IN2 = 6;
int sensor = A1;
String str;

void setup() {
  myservo.attach(9);
  Serial.begin(57600);
}

void loop() {
  if (Serial.read() == '1') {
    Serial.println("펌프 작동");
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    delay(5000);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
  }
  if (Serial.read() == '2') {
    Serial.println("서보 모터 작동");
    myservo.write(180);
    delay(500);
    myservo.write(90);
  }
  if (Serial.read() == '3') {
    Serial.print("토양 센서 값 : ");
    Serial.println(analogRead(sensor));
  }
}


// 1.7
// 3.2
// 4.2

// 1.8

// 5초 1
// 6초 1.5
// 7초 1.2
