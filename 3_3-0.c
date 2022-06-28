#include <stdio.h>

void main() {
	int n;
	printf("마지막 별의 개수 : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { // 줄을 바꿔주는 반복문 1번째 줄, 2번째 줄 ...
		for (int j = 0; j < i+1; j++) { // 몇 번째 줄인지 파악해 별을 찍음
			printf("*");
		}
		printf("\n");
	}
}