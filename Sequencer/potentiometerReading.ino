int activeStep = 0;
int maxFreq = 10000;
int minFreq = 100;
int seqSteps[8] = {A0,A1,A2,A3,A4,A5,A6,A7};
int tempoPot = A8;
int soundOut = 52;

void setup() {
  // Use serial for Debugging
  Serial.begin(9600);
}

void loop() {
  int stepValue = analogRead(seqSteps[activeStep]);
  tone(soundOut,map(stepValue,0,1024,100,10000));
  Serial.println(stepValue);
  stepValue = (stepValue + 1) % 8;
  delay(map(analogRead(tempoPot),0,1024,2000,240));
}
