#pragma once

class Car {
private:
     float fuel{0};
     float speed{0};
     int passengers{0};
     static int totalCount;
     //int arr[5]{1,2,3,4,5};
     //char *p{};
public:
    Car();
    Car(float amount);
    Car(float amount,int pass);
    ~Car();
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard()const;
    static void ShowCount();

};
