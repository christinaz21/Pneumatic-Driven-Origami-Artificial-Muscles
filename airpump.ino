#define PUMP_OUT 7
#define PUMP_IN 8


int buttonOutState = HIGH;
int buttonOutState2 = HIGH;


void setup() {
    Serial.begin(9600);

  pinMode(PUMP_OUT, OUTPUT);
  pinMode(PUMP_IN, OUTPUT);

}

void loop() {
  int input;

  if (Serial.available()){
    input = Serial.read();
  }

  if (input == 'x') {
    buttonOutState = !buttonOutState;
  }

  if (input == 'n') {
    buttonOutState2 = !buttonOutState2;
  }

  digitalWrite(PUMP_OUT, buttonOutState);
  digitalWrite(PUMP_IN, buttonOutState2);

  
}
