#include <SoftI2C.h>
#include <DS3232RTC.h>

SoftI2C i2c(A4, A5);
DS3232RTC rtc(i2c);

void setup() {
      Serial.begin(9600);
  // set 12h clock 
  
}

void loop() {
  RTCTime time; 
  rtc.readTime(&time);
  Serial.print("Time: ");
  printDec2(time.hour);
  Serial.print(':');
  printDec2(time.minute);
  Serial.println();
  delay(1000);
}

void printDec2(int value)
{
    Serial.print((char)('0' + (value / 10)));
    Serial.print((char)('0' + (value % 10)));
}

