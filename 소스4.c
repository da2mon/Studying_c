//7-3 Q1
#include <stdio.h>

int main4(void) {
	int total=0, num;

	printf("정수 입력(0 to quit): ");
	scanf("%d", &num);
	total += num;

	while (num) {
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계 : %d", total);
	return 0;
}