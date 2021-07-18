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
//printf("%d\n", SquareByReference(&num)); 로 쓰면 num의 저장된 값이 제곱으로 바뀐것이고 반환하지않는다 따라서 따로 프린트해야함
//Reference함수를 해맸는데 a에 값 저장 후 계산한 값을 num위치로 가서 저장하는 것