#include "mbed.h"
#include "BME280.h"

Serial pc(USBTX, USBRX);



BME280 sensor(D0,D1);

int main() {
    
    while(1) {
        pc.printf("%2.2f degC, %04.2f hPa, %2.2f %%\r\n", sensor.getTemperature(), sensor.getPressure(), sensor.getHumidity());
        wait(1);
    }
}