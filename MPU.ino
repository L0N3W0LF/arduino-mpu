#include "MPU6050.h"

const int SERIAL_BAUD_RATE = 9600;
const int SERIAL_PRINT_DELAY = 333;

MPU6050 mpu;

void setup()
{
    Serial.begin(SERIAL_BAUD_RATE);
    mpu.WakeUp();
}

void loop()
{
    const auto accel = mpu.Acceleration();
    const auto gyro = mpu.Gyroscope();
    const double temp = mpu.Temperature();

    Serial.print("AccelX = ");
    Serial.print(accel.x);
    Serial.print(" | AccelY = ");
    Serial.print(accel.y);
    Serial.print(" | AccelZ = ");
    Serial.print(accel.z);
    Serial.print(" | GyroX = ");
    Serial.print(gyro.x);
    Serial.print(" | GyroY = ");
    Serial.print(gyro.y);
    Serial.print(" | GyroZ = ");
    Serial.print(gyro.z);
    Serial.print(" | Temp = ");
    Serial.print(temp);
    Serial.println();

    delay(SERIAL_PRINT_DELAY);
}
