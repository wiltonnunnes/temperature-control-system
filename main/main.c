#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_wifi/include/esp_wifi.h"


void app_main(void)
{
  esp_wifi_init(WIFI_INIT_CONFIG_DEFAULT);
  esp_wifi_set_mode();
  int i = 0;
  while (1) {
    printf("[%d] Hello world!\n", i);
    i++;
    vTaskDelay(5000 / portTICK_PERIOD_MS);
  }
}
