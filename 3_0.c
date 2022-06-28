#include <stdio.h>

void main() {
	for (int i = 0; i < 5; i++) {
		printf("%d번 반복중\n", i);
	}

	int j = 0;
	while (j < 5) {
		printf("%d번 반복중\n", j);
		j++;
	}
}