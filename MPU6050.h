#ifndef MPU6050_H
#define MPU6050_H

struct Vector
{
    int x;
    int y;
    int z;
};

class MPU6050
{
public:
    MPU6050();
    ~MPU6050() = default;

    void WakeUp();

    Vector Acceleration();
    Vector Gyroscope();
    double Temperature();
};

#endif
