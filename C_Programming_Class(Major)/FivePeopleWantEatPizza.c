#include <stdio.h>
#define PI 3.141592
int main() {
	const double radius = 15;
	double circumference;
	circumference = radius * radius * PI;
	printf("������ %.1f�� ������ ���̴� %.1f�Դϴ�.\n", radius, circumference);
	printf("1�δ� %.1f ũ���� ���ڸ� ���� �� �ֽ��ϴ�.\n", circumference / 5);
	return 0;
}