//7-3 Q1
#include <stdio.h>

int main4(void) {
	int total=0, num;

	printf("���� �Է�(0 to quit): ");
	scanf("%d", &num);
	total += num;

	while (num) {
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ� : %d", total);
	return 0;
}