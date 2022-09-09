int activeStep = 0;
int maxFreq = 2500;
int minFreq = 50;
int seqSteps[8] = {A0,A1,A2,A3,A4,A5,A6,A7};
int tempoPot = A8;
int soundOut = 13;

void setup() {
  // Use serial for Debugging
  Serial.begin(9600);
  pinMode(soundOut,OUTPUT);
}

void loop() {
  int stepValue = analogRead(seqSteps[activeStep]);         // Read current step
  tone(soundOut,map(stepValue, 0, 1024, maxFreq, minFreq));  // Set tone of speaker based on reading mapped
  Serial.println(stepValue);                                // Print for Debuggin purposes
  activeStep = (activeStep + 1) % 8;                          // Add 1 w/ modulo of 8
  delay(map(analogRead(tempoPot),0,1024,1000,20));         // Delay timer, Tempo
}
