#include <stdio.h>
int main() {
	
	int num1 = 14;
	int num2 = 3;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;
	
	sum1 = num1 + num2;
	sum2 = num1 - num2;
	sum3 = num1 * num2;
	sum4 = num1 / num2;
	sum5 = num1 % num2;
	printf("%d + %d = %d \n", num1, num2, sum1);
	printf("%d - %d = %d \n", num1, num2, sum2);
	printf("%d * %d = %d \n", num1, num2, sum3);
	printf("%d / %d = %d ... %d \n", num1, num2, sum4, sum5);
		
		
	return 0;
}