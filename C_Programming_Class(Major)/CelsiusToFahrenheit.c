#include <stdio.h>

int main()
{
	double f, c;

	scanf("%lf", &f);
	c = (f - 32) * (5.0 / 9.0);

	printf("ȭ�� %.1f���� ���� %.1f�� �Դϴ�.\n", f, c);

	return 0;
}