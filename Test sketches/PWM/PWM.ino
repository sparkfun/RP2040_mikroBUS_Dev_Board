/*

*/

float outputVoltage0 = 0.6;

#define ANALOG_OUT_RESOLUTION 8 //All MM boards are 8-bit but may change in the future
#define ANALOG_REF_VOLTAGE 3.3
#define PWM0 16

int pwmMaxValue = pow(2, ANALOG_OUT_RESOLUTION);

void setup() {
  Serial.begin(115200);
//  while(!Serial); //Needed for Teensy
//  Serial.println("PWM Example");
//  Serial.flush();

  int pwmValue0 = outputVoltage0 * pwmMaxValue / ANALOG_REF_VOLTAGE;

  analogWrite(PWM0, pwmValue0);
  
  Serial.print("PWM0 now outputting: ");
  Serial.print(outputVoltage0, 2);
  Serial.println("V");
}

void loop() {

}
