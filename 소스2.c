//5-1 Q1
#include <stdio.h>

int main2(void) {
	int a, b, c, d;
	printf("�� ����� x, y ��ǥ : ");
	scanf("%d %d", &a, &b);
	printf("�� �ϴ��� x, y ��ǥ : ");
	scanf("%d %d", &c, &d);

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�", (c - a) * (b - d));
	return 0;
}
