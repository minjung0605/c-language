#include<stdio.h>
int main() {
	
	float  num1 = 14;
	float  num2 = 3;
	float  sum = 0;
	float  sub = 0;
	float  mul = 0;
	float  div = 0;
	
	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = num1 / num2;
	
	printf("%.1f + %.1f = %.2f \n", num1, num2, sum);
	printf("%.1f - %.1f = %.2f \n", num1, num2, sub);
	printf("%.1f X %.1f = %.2f \n", num1, num2, mul);
	printf("%.1f / %.1f = %.2f \n", num1, num2, div);

	
	return 0;
}