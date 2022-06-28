//ÇÔ¼ö
#include <stdio.h>

void Sum(double x, double y) {
	printf("Sum : %.2lf\n", x + y);
}

double Diff(double x, double y) {
	return x - y;
}

double Mul(double x, double y) {
	return x * y;
}

double Div(double x, double y) {
	return x / y;
}

void main() {
	double x, y;

	printf("input x : ");
	scanf("%lf", &x);
	printf("input y : ");
	scanf("%lf", &y);

	Sum(x, y);
	printf("Diff : %lf\n", Diff(x, y));
	printf("Mul : %lf\n", Mul(x, y));
	printf("Div : %lf\n", Div(x, y));
}