#include <stdio.h>
#include <math.h>

int main()
{
	double KRW = 10000000; // 1000����

	// �޷�,������ ��� ��, floor �Լ��� ����Ͽ� �Ҽ��� �Ʒ� ���� ������ ���
	printf("%.f �޷�\n", floor(KRW / 1120));
	printf("%.f ��\n", floor(KRW / 11.21));

	return 0;
}