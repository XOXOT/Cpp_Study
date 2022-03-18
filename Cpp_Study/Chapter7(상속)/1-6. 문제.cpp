#include <iostream>
using namespace std;

class car
{
public:
	car(int gas) : gasolineGauge(gas)
	{
		cout << "car 생성자"<< endl;
		//empty
	}
	int GetGasGauge()
	{
		return gasolineGauge;
	}

private:
	int gasolineGauge;
};

class HybridCar : public car
{
public:
	HybridCar(int gas, int elec)
		:car(gas), electricGauge(elec)
	{
		cout << "HybridCar 생성자" << endl;
	}
	int GetElecGauge()
	{
		return electricGauge;
	}

private:
	int electricGauge;
};

class HybridWaterCar : public HybridCar
{
public:
	HybridWaterCar(int gas, int elec, int water)
		:HybridCar(gas, elec), waterGauge(water)
	{
		cout << "HybridWaterCar 생성자" << endl;
	}
	void ShowCurrentGauge()
	{
		cout << "잔여 가솔린:" << GetGasGauge() << endl;
		cout << "잔여 전기량:" << GetElecGauge() << endl;
		cout << "잔여 워터량:" << waterGauge << endl;
	}

private:
	int waterGauge;
};

int main(void)
{
	HybridWaterCar wCar(79, 65, 35);
	wCar.ShowCurrentGauge();
	return 0;
}