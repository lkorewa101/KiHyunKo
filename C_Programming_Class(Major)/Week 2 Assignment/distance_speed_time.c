#include <stdio.h>
// 1km = 0.621371����(mile)
#define MILE 0.621371

int main()
{
	double distance = 10.0; // �Ÿ� 10����
	double speed = 3.0; // �ӵ� 3km/h
	double lee_distance = 150.0; // �����������κ��� ������ �Ÿ� 150m

	double mile_to_km = distance / MILE; // ������ km�� ��ȯ
	double remaining_distance = mile_to_km - (lee_distance / 1000.0); // �̾��� ���� �Ÿ��� ���ִµ� ���͸� km�� ��ȯ�ؼ� ����

	double time = remaining_distance / speed; // �� ���� ���� �����ϴ°�?

	// �̾��� �� �ð� �ȿ� �����ϴ°��� ���
	printf("%f\n", time);

	return 0;
}