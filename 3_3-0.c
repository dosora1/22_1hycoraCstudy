#include <stdio.h>

void main() {
	int n;
	printf("������ ���� ���� : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) { // ���� �ٲ��ִ� �ݺ��� 1��° ��, 2��° �� ...
		for (int j = 0; j < i+1; j++) { // �� ��° ������ �ľ��� ���� ����
			printf("*");
		}
		printf("\n");
	}
}