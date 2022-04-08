#include <stdio.h>

void main() {
	int A, B;
	double C, D;
	
	printf("A : ");
	scanf("%d",&A);
	printf("B : ");
	scanf("%d", &B);
	printf("C : ");
	scanf("%lf", &C);
	printf("D : ");
	scanf("%lf", &D);

	printf("정수형 변수의 나눗셈 : A/B = %d\n",A/B);
	printf("더블형 변수의 나눗셈 : C/D = %lf\n", C/D);

}