#define DAC_CH1 25
int pwm = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

}

void loop() {
  int inputFlowRate;
  int voltage;

  if (Serial.available()){
    inputFlowRate = Serial.read();
    voltage = 2 * inputFlowRate;
    if (voltage >= 3.3) {
      pwm = 255;
    }
    else {
      pwm = voltage * 255 / 3.3;
    }
  }

  dacWrite(DAC_CH1, pwm);
 
 


}
