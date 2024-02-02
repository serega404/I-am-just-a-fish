#include <DFPlayerMini_Fast.h>
#include <SoftwareSerial.h>

SoftwareSerial playerSerial(4, 5);  // RX, TX

DFPlayerMini_Fast myMP3;
int buttonState = 0;

#define MUSIC_TIME 140000  // время песни в мс (для остановки двигателя)
uint32_t tmr;              // переменная таймера

void setup() {
  Serial.begin(115200);

  playerSerial.begin(9600);
  myMP3.begin(playerSerial, true);

  delay(100);

  Serial.println("Установка максимальной громкости");
  myMP3.volume(30);

  Serial.println("Воспроизведение остановлено");
  myMP3.stop();

  pinMode(15, OUTPUT);
  pinMode(16, INPUT);

  analogWrite(15, 0);
}

void loop() {
  buttonState = digitalRead(16);
  if (buttonState == HIGH) {
    Serial.println("Устройство активировано");
    myMP3.play(1);
    analogWrite(15, 120);
    tmr = millis();
  }

  if (millis() - tmr >= MUSIC_TIME) {
    analogWrite(15, 0);
  }
}
