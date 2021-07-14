//7-3 Q1
#include <stdio.h>

int main3(void) {
	int total = 0, num = 1;

	while (num) {
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계 : %d", total);
	return 0;
}