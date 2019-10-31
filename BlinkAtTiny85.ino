
int led = 4;
int potentiometer = 3;
int spacer =100;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int val = analogRead(potentiometer);
  val = map(val, 0, 1023, 0, 10000);

    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(spacer+50);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(spacer-50);
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(spacer-50);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(spacer+50);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(spacer-50);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(spacer);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(spacer+100);              // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW


  
  delay(val);

  // wait for a second
}
