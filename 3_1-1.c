#include <stdio.h>

void main() {
	for (int dan = 2; dan < 6; dan++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", dan, j, dan*j);
		}
		printf("\n");
	}
}