#include <stdio.h>
int main() {
	
	char name[10];
	int age = 0;
	char star[7];
	
	printf("이름을 입력 : "); 
	scanf("%s", name);
	printf("나이를 입력 : "); 
	scanf("%d", &age);
	printf("성별을 입력 : "); 
	scanf("%s", star);

	printf("\n%s\n", name);
	printf("%d\n", age);
	printf("%s\n", star);
	
	return 0;
}
// 한글은 3bite
// 4월 4일 bmi 측정기 만들기