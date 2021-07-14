//8-3 Q1
#include <stdio.h>

int main6(void) {
	int n,c;
	scanf("%d", &n);

	if ((0 <= n) && (n < 10))
		c = 1;
	else if ((10 <= n) && (n < 20))
		c = 2;
	else if ((20 <= n) && (n < 30))
		c = 3;

	switch (c) {
	case 1:
		printf("0이상 10미만");
		break;
	case 2:
		printf("10이상 20미만");
		break;
	case 3:
		printf("20이상 30미만");
		break;
	default:
		printf("30이상");

	}
	return 0;
}