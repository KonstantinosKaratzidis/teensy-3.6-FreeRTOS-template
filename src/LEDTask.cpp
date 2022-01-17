#include <Arduino.h>
#include <FreeRTOS.h>
#include <task.h>

int ledPin = 13;

void LEDTask(void* args) {
  pinMode(ledPin, OUTPUT);

  for(;;){
		digitalWrite(ledPin, HIGH);
		vTaskDelay(500);
		digitalWrite(ledPin, LOW);
		vTaskDelay(500);
  }
}
