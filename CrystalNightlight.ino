// Name the LEDs and switch:
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int button = 3;

// Button State Variable
int buttonState = 0;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the LEDs as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  // initialize the button as an input.
  pinMode(button, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  //read state of button
  buttonState = digitalRead(button);
  
  if (buttonState == HIGH) {
  
  digitalWrite(led1, LOW);  // ON: 2,4. OFF: 1,3,5 (HIGH is the voltage level)
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  delay(250);               // wait
  digitalWrite(led1, LOW);  // ON: 2,3. OFF: 1,4,5
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(250);               // wait
  digitalWrite(led1, LOW);  // ON: 3,5. OFF: 1,2,4
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(250);               // wait
  digitalWrite(led1, HIGH);  // ON: 5,1. OFF: 2,4,5
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(250);               // wait
  digitalWrite(led1, HIGH);  // ON: 1,4. OFF: 2,3,5
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  delay(250);               // wait
  digitalWrite(led1, LOW);  // ON: 4,3. OFF: 2,4,5
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, LOW);
  delay(250);               // wait
  digitalWrite(led1, HIGH);  // ON: 1,3. OFF: 2,4,5
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(250);               // wait
  digitalWrite(led1, HIGH);  // ON: 1,2. OFF: 3,4,5
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(250);               // wait
  digitalWrite(led1, LOW);  // ON: 2,5. OFF: 2,3,4
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
  delay(250);               // wait
  digitalWrite(led1, LOW);  // ON: 4,5. OFF: 2,3,5
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  delay(250);               // wait
 
  }  
  else {
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  }
}
