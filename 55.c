#include <stdio.h>
int main() {
	
	int a = 3;
	a = a - 6;
	
	if(a>5) {
		printf("%d\n", a);
		printf("조건이 참일때, 실행 \n");
	} else {
		printf("%d\n", a);
		printf("조건이 거짓일때, 실행 \n");
	}
	
	return 0;
}