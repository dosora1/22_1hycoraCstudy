#include <stdio.h>

void main() {
	int n;
	int sum=0;
	for (int i = 0; i < 5; i++) {
		printf("Write a number : ");
		scanf("%d", &n);
		sum += n; //sum = sum+n
		printf("%d번째 출력 : %d\n", i+1,sum);
	}
}