const int sensorOne = 26;
//Assign for rest of sensors 

int sensorOneRead; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(sensorOne, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorOneRead = analogRead(sensorOne);
  Serial.print("Sensor One:" );
  Serial.println(sensorOneRead);
  delay(10); 
}

//DONT TOUCH LEDON pin 