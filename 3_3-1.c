#include <stdio.h>

void main() {
	int x;
	printf("������ �� �� ���� : ");
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		//���� ���-����
		for (int j = 1; j < x - i; j++) {
			printf("-");
		}
		//�� ���-����
		for (int j = 0; j <= 2 * i; j++) {
			printf("%c", '*');
		}
		printf("\n");
	}
}