//pins for ultrasonic
const int trigPin = ;
const int echoPin = ;

//pins for RGB LED
const int redPin = ;
const int greenPin = ;
const int bluePin = ;

void setup()
{ 
  //Initialize the Serial class
  /* Your Code */
  
  //Initialize your ultrasonic pins
  /* Your Code */
 
  //initialize your RGB LED pins
  /* Your Code */
}

double distance_value()
{
  double duration,distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration/2;
  return distance;
}

void loop
{
  /* Your Code */
}
