![IDE](https://img.shields.io/badge/Work%20in-Arduino%20IDE-green)

## О проекте

Небольшое устройство воспроизводящее звук и управляющее двигателем, созданное ради шутки, а точнее ради мема с крутящимися объектами под музыку.

## Инструкция по запуску

1) Подготовить и отформатировать sd карту в формат FAT32 
2) Загрузить аудиофайл на флешку (MP3, WAV, WMA)
3) Открыть `src.ino` в Arduino IDE
4) Выбрать COM порт и модель платы
5) Изменить время до оставноки двигателя (`MUSIC_TIME` в коде)
6) Прошить

## Схема устройства

### Arduino
<img src="img/NANO Вариант.png" height="250" />

### ESP8266 Lolin
<img src="img/ESP Вариант.png" height="250" />

## Библиотеки

* [DFPlayerMini_Fast](https://github.com/PowerBroker2/DFPlayerMini_Fast)