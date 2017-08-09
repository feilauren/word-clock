#define data 2
#define clock 3

void setup() {
  pinMode(clock, OUTPUT); // make the clock pin an output
  pinMode(data , OUTPUT); // make the data pin an output
  shiftOut(data, clock, LSBFIRST, B10101010); // send this binary value to the shift register
}

void loop() {
  // put your main code here, to run repeatedly:

}
