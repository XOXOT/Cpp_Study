#include <iostream>
using namespace std;

class car
{
public:
	car(int gas) : gasolineGauge(gas)
	{
		cout << "car ������"<< endl;
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
		cout << "HybridCar ������" << endl;
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
		cout << "HybridWaterCar ������" << endl;
	}
	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ�:" << GetGasGauge() << endl;
		cout << "�ܿ� ���ⷮ:" << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�:" << waterGauge << endl;
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