int delay_timer;

void init_ir() {
  // put your setup code here, to run once:
  pinMode(IR_PIN, OUTPUT);
}

void carrier(unsigned int dur) {
  //for (int k=0; k<dur/base_dur; k++) {
  int k;
  for (k=0; k<(dur/14); k++) {
    digitalWrite(IR_PIN, HIGH);
    delayMicroseconds(7);//sub_dur1);
    digitalWrite(IR_PIN, LOW);
    delayMicroseconds(7);//sub_dur2);
  }
}

void irblink(int code[], int N) {
  digitalWrite(IR_PIN, LOW);
  for (int j=0; j<1; j++){
    carrier(FIRST_PULSE_USEC);
    delayMicroseconds(FIRST_PAUSE_USEC);
    for (int k=0; k<N; k++){
      carrier(SHORT_USEC);
      if (code[k])
        delayMicroseconds(LONG_USEC_PAUSE);
      else
        delayMicroseconds(SHORT_USEC_PAUSE);
      
    }  
    carrier(SHORT_USEC);
    delayMicroseconds(LAST_LONG_PAUSE_USEC1);
    delayMicroseconds(LAST_LONG_PAUSE_USEC2);
    delayMicroseconds(LAST_LONG_PAUSE_USEC3);
    carrier(LAST_PULSE_USEC);
    delayMicroseconds(LAST_PAUSE_USEC);
    carrier(SHORT_USEC);
  }
  digitalWrite(IR_PIN, LOW);
}
