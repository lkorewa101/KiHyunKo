#include <stdio.h>
#include <math.h>

int main()
{
    int base = 4; // �����ﰢ���� �ظ�
    int hypotenuse = 5; // �����ﰢ���� ����

    // �����ﰢ���� ���̸� ���ϱ� ���� ��Ÿ��� ���� ���
    int height = sqrt(hypotenuse * hypotenuse - base * base);

    // �ﰢ���� ���� �� ���
    printf("�ﰢ���� ���� : %d\n", height);

    return 0;
}