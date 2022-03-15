#ifndef __CAR2_H__ 
#define __CAR2_H__ 


#include <iostream>
#include <cstring>

using namespace std;


class Car
{

private:
    enum
    {
        ID_LEN = 20,
        MAX_SPD = 200,
        FUEL_STEP = 2,
        ACC_STEP = 10,
        BRK_STEP = 10
    };
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;
public:
    void InitMembers(const char* ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};


inline void Car::InitMembers(const char* ID, int fuel)
{
    strcpy_s(gamerID, ID);  // strcpy�� �������� ���� �Լ��̹Ƿ� strcpy_s ���
    fuelGauge = fuel;
    curSpeed = 0;
}

inline void Car::ShowCarState()
{
    cout << "������ ID: " << gamerID << endl;
    cout << "���ᷮ: " << fuelGauge << "%" << endl;
    cout << "���� �ӵ�: " << curSpeed << "km/h" << endl << endl;
}

#endif