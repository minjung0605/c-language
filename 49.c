#include<stdio.h>
main() {
	
	int a = 30;
	float b = 3.14;
	char c = 'A';
	char d[6] = {'K', 'O', 'R', 'E', 'A', '\0'};
	printf("%d %.2f %c %c", a, b, c, d[0]);
	
	return 0;
}