#include <stdio.h>

int main()
{
	double f, c;

	scanf("%lf", &f);
	c = (f - 32) * (5.0 / 9.0);

	printf("È­¾¾ %.1fµµ´Â ¼·¾¾ %.1fµµ ÀÔ´Ï´Ù.\n", f, c);

	return 0;
}