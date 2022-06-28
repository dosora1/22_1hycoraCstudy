#include <stdio.h>

void main() {
	int x;
	printf("마지막 줄 별 개수 : ");
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		//공백 출력-감소
		for (int j = 1; j < x - i; j++) {
			printf("-");
		}
		//별 출력-증가
		for (int j = 0; j <= 2 * i; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
}