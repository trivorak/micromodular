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
  int stepValue = analogRead(seqSteps[activeStep]);         // Read current step
  tone(soundOut,map(stepValue, 0, 1024, minFreq,maxFreq));  // Set tone of speaker based on reading mapped
  Serial.println(stepValue);                                // Print for Debuggin purposes
  stepValue = (stepValue + 1) % 8;                          // Add 1 w/ modulo of 8
  delay(map(analogRead(tempoPot),0,1024,2000,240));         // Delay timer, Tempo
}
