//9-1 Q3
#include <stdio.h>

int main7(void) {
	int a=0, b=1, c;
	int num;
	printf("���� �Է��Ͻÿ� :");
	scanf("%d", &num);
	if (num ==1)
		printf("%d", a);
	else 
		printf("%d %d ", a, b);

	for (int i = 0; i < num-2; i++) {
		c = a + b;
		a = b;
		b = c;
		printf("%d ", c);
	}
	return 0;
}