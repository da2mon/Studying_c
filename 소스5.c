//8-2 Q2
#include <stdio.h>

int main5(void) {
	for (int A = 0; A < 10; A++) {
		for (int Z = 0; Z < 10; Z++) {
			if (((10 * A + Z) + (10 * Z + A)) == 99)
				printf("A: %d, Z: %d \n", A, Z);
		}
	}
	return 0;
}
//예시답에 if(A==Z) continue; 를 처리하는 이유?
//그냥 A+Z==9로 해도 풀릴듯