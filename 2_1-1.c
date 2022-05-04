/*
두 정수를 입력 받아 덧셈, 뺄셈, 나눗셈 몫, 나눗셈 나머지를 출력
*/

#include <stdio.h>

void main() {
	int a, b;

	//input
	printf("연산할 두 정수 a,b를 입력해주세요 : ");
	scanf("%d %d", &a, &b);

	//output
	printf("덧셈 결과 : %d\n", a + b);
	printf("뺄셈 결과 : %d\n", a - b);
	printf("나눗셈 몫 출력 : %d\n", a / b);
	printf("나눗셈 나머지 출력 : %d\n", a % b);
}