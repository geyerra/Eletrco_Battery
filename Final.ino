const unsigned long time_free = 10; //Time in free spin
const unsigned long time_user = 1; //Time in free spin
const int Light_Pin = A0; 
const int Power_Pin = A1;

void setup() {
  // Setting up the pins and then setting them to low
  pinMode(Light_Pin, OUTPUT);
  pinMode(Power_Pin, OUTPUT);
  digitalWrite(Light_Pin,LOW);
  digitalWrite(Power_Pin,LOW);
}

void loop() {
  // Setting pins high
  digitalWrite(Light_Pin,HIGH);
  digitalWrite(Power_Pin,HIGH);

  //This is the delay for the user to spin the wheel
  delay(time_user*60*1000);  

  //Setting Pins low
  digitalWrite(Light_Pin,LOW);
  digitalWrite(Power_Pin,LOW);

  //Time in free spin
  delay(time_free*60*1000);
}
