#include "CarInline.h"

int main(void)
{
    Car run99;
    run99.InitMembers("run99", 100);  // Ŭ������ ����� �ʱ�ȭ�� �и��ؾ� ��
    run99.Accel(); // run99�� �ɹ� �Լ�
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77;
    sped77.InitMembers("sped77", 100);
    sped77.Accel();  // sped77�� �ɹ� �Լ�
    sped77.Break();
    sped77.ShowCarState();

    system("pause");  // VC++ ������ �ʿ�

    return 0;
}