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

	printf("������ ������ ������ : A/B = %d\n",A/B);
	printf("������ ������ ������ : C/D = %lf\n", C/D);

}