
int led = 4;
int potentiometer = 3;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int val = analogRead(potentiometer);


  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(val);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(val);

  // wait for a second
}
