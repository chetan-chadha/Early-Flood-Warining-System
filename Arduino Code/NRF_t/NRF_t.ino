#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>
RF24 radio(9, 10); // CE, CSN
const byte address[6] = "00001";
void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT_PULLUP);
    int sensorVal = digitalRead(2);
//  if(sensorVal == 0){
    Serial.print("helloaoa");
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
//  }
}
void loop() {
 
    Serial.print("hello");
  const char text[] = "2500 liters";
  radio.write(&text, sizeof(text));
  delay(100);
}
