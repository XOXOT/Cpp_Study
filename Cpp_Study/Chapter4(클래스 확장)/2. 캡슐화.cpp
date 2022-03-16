#include <iostream>
using namespace std;

////Encaps1 p.161
//class SinivelCap    // �๰ óġ�� ĸ��
//{
//public:
//	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
//};
//
//class SneezeCap    // ��ä�� óġ�� ĸ��
//{
//public:
//	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
//};
//
//class SnuffleCap   // �ڸ��� óġ�� ĸ��
//{
//public:
//	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
//};
//
//class ColdPatient
//{
//public:
//	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
//	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
//	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
//};
//
//int main(void)
//{
//	SinivelCap scap;
//	SneezeCap zcap;
//	SnuffleCap ncap;
//
//	ColdPatient sufferer;
//	sufferer.TakeSinivelCap(scap);
//	sufferer.TakeSneezeCap(zcap);
//	sufferer.TakeSnuffleCap(ncap);
//	return 0;
//}
#include <iostream>
using namespace std;

class SinivelCap    // �๰ óġ�� ĸ��
{
public:
	void Take() const { cout << "�๰�� ��~ ���ϴ�." << endl; }
};

class SneezeCap    // ��ä�� óġ�� ĸ��
{
public:
	void Take() const { cout << "��ä�Ⱑ �ܽ��ϴ�." << endl; }
};

class SnuffleCap   // �ڸ��� óġ�� ĸ��
{
public:
	void Take() const { cout << "�ڰ� �� �ո��ϴ�." << endl; }
};

class CONTAC600
{
private:
	SinivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
};

int main(void)
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);
	return 0;
}

