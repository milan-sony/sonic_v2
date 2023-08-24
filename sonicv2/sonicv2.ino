const int trigPin = 5;
const int echoPin = 8;
const int bPin = 2;

long duration;
int distance;

void setup() {
  pinMode(bPin, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);

  // Calculating the distance in cm
  distance = duration * 0.034 / 2;
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("CM");
  Serial.println("");
  if(distance <= 10){
    digitalWrite(bPin, HIGH);
    
    }
    else{
      digitalWrite(bPin, LOW);
    }
}
