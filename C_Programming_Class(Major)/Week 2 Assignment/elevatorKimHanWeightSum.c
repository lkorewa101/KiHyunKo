#include <stdio.h>

int main()
{
	int kimWeight = 70; // 70kg
	int hanWeight = 80; // 80kg

	// ±è¾¾ÀÇ ¸ö¹«°Ô¿Í ÇÑ¾¾ÀÇ ¸ö¹«°Ô¸¦ ÇÕÇÑ °ª
	int totalWeight = kimWeight + hanWeight;

	// µÎ »ç¶÷ÀÇ ÃÑ ¸ö¹«°Ô °ªÀ» Ãâ·Â
	printf("¸ö¹«°ÔÀÇ ÇÕ : %d", totalWeight);

	return 0;
}