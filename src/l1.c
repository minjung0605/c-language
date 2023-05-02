#include <stdio.h>
int main () {
	
	int a, b, c;
	a = 5 % 3; // a=2
	a--; // a=2
	b = (a++) + 3; // a=1, b=4
	printf("%d, %d\n", a, b); // a=2, b=4
	c = (++a) + 3; // a=3, c=6
	printf("%d, %d, %d\n", a, b, c); // a=3, b=4, c=6
	
	return 0;
}