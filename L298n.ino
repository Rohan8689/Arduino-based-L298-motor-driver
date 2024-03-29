#define motor1Pin1 2
#define motor1Pin2 3
#define motor1EnablePin 9 // PWM Pin

#define motor2Pin1 4
#define motor2Pin2 5
#define motor2EnablePin 10 // PWM Pin

void setup() {
  // Initialize motor control pins as outputs
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor1EnablePin, OUTPUT);
  
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(motor2EnablePin, OUTPUT);
}

void loop() {
  // Set motor direction and speed
  // Motor 1 forward
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  analogWrite(motor1EnablePin, 200); // Adjust PWM value for speed control
  
  // Motor 2 forward
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(motor2EnablePin, 200); // Adjust PWM value for speed control
  
  delay(2000); // Run motors for 1 second
  
  // Stop motors
  digitalWrite(motor1EnablePin, LOW);
  digitalWrite(motor2EnablePin, LOW);
  
  delay(4000); // Wait for 1 second before next operation
}
