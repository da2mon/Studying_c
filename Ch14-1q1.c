//CH14-1 Q1

#include <stdio.h>

int SquareByValue(int num) {
	return num * num;
}

int SquareByReference(int* ptr) {
	int a = *ptr;
	*ptr = a * a;
}

int main(void) {

	int num = 3;
	printf("%d\n", SquareByValue(num));
	SquareByReference(&num);
	printf("%d", num);
	return 0;
}
//printf("%d\n", SquareByReference(&num)); �� ���� num�� ����� ���� �������� �ٲ���̰� ��ȯ�����ʴ´� ���� ���� ����Ʈ�ؾ���
//Reference�Լ��� �ظ̴µ� a�� �� ���� �� ����� ���� num��ġ�� ���� �����ϴ� ��