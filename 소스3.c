//7-3 Q1
#include <stdio.h>

int main3(void) {
	int total = 0, num = 1;

	while (num) {
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ� : %d", total);
	return 0;
}