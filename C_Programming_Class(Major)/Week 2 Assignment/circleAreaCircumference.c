#include <stdio.h>
// �������� 3.14�� ������
#define PI 3.14

int main()
{
	double radius = 3.58; // ���� ������ 3.58
	double area = radius * radius * PI; // ���� ������ ���� ������ ����
	double circumference = 2 * radius * PI; // ���� �ѷ��� ���� ������ ����

	// ���� ���� ����, ���� �ѷ� ���� ���
	printf("���� ���� : %F\n", area);
	printf("���� �ѷ� : %f\n", circumference);

	return 0;
}