#include <stdio.h>

void main() {
	int n;
	for (int i = 0; i < 5; i++) {
		printf("Write a number : ");
		scanf("%d", &n);
		printf("%d번째 출력 : %d\n", i, n);
	}
}