// Bibliotecas necessárias compatíveis com a arquitetura I2C
#include "Wire.h"
#include "I2Cdev.h"
#include "MPU6050.h"
// define a função do acelerômetro/giroscópio
MPU6050 accelgyro(0x68);

MPU6050 accelgyro2(0x69);


int16_t ax, ay, az;
int16_t gx, gy, gz;

int16_t ax2, ay2, az2;
int16_t gx2, gy2, gz2;

void setup() {
Wire.begin();
Serial.begin(115200);
accelgyro.initialize();
}
void loop() {
//Recebe os dados do sensor
accelgyro.getAcceleration(&ax, &ay, &az);
accelgyro.getAcceleration(&ax2, &ay2, &az2);
accelgyro.getRotation(&gx, &gy, &gz);
accelgyro.getRotation(&gx2, &gy2, &gz2);
// Mostra a grandeza obtida pelo sensor

Serial.print(ax); Serial.print('\t'); 
Serial.print(ay); Serial.print('\t'); 
Serial.print(az); Serial.print('\t'); 
Serial.print(gx); Serial.print('\t'); 
Serial.print(gy); Serial.print('\t'); 
Serial.print(gz); Serial.print('\t'); 
Serial.print(ax2); Serial.print('\t'); 
Serial.print(ay2); Serial.print('\t'); 
Serial.print(az2); Serial.print('\t'); 
Serial.print(gx2); Serial.print('\t'); 
Serial.print(gy2); Serial.print('\t'); 
Serial.println(gz2);
}
