#include <stdio.h>
// 1km = 0.621371����(mile)
#define MILE 0.621371

int main()
{
	int ten = 40; // 40km
	int hundred = 400; // 400km

	// km �� ���� mile �� ��ȯ�Ͽ� ���
	printf("%dkm to mile : %f\n", ten, ten * MILE);
	printf("%dkm to mile : %f\n", hundred, hundred * MILE);

	return 0;
}