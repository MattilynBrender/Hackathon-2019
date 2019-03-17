int pin1 = 7;
int button = 2;
//int buttonClicks = 0;
int state = HIGH;
int reading;
int previous = LOW;

long time = 0;
long debounce = 1000;

void setup() {
  // put your setup code here, to run once:

pinMode(pin1, OUTPUT);
pinMode(button, INPUT);

//digitalWrite(pin1, LOW);

 
}

void loop() {
reading = digitalRead(button);

 
if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

    time = millis();    
  }

  digitalWrite(pin1, state);

  previous = reading;
}


  
//int time = random(1000,2000);
//digitalWrite(pin1, HIGH);
//delay(time);
//digitalWrite(pin1, LOW);
//delay(time);

