//5-1 Q1
#include <stdio.h>

int main2(void) {
	int a, b, c, d;
	printf("좌 상단의 x, y 좌표 : ");
	scanf("%d %d", &a, &b);
	printf("우 하단의 x, y 좌표 : ");
	scanf("%d %d", &c, &d);

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다", (c - a) * (b - d));
	return 0;
}
