#include <stdio.h>

void main() {
	int n;
	printf("몇 단을 수행할까요? : ");
	scanf("%d", &n);
	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
}