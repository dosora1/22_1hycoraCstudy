/*
�� ������ �Է� �޾� ����, ����, ������ ��, ������ �������� ���
*/

#include <stdio.h>

void main() {
	int a, b;

	//input
	printf("������ �� ���� a,b�� �Է����ּ��� : ");
	scanf("%d %d", &a, &b);

	//output
	printf("���� ��� : %d\n", a + b);
	printf("���� ��� : %d\n", a - b);
	printf("������ �� ��� : %d\n", a / b);
	printf("������ ������ ��� : %d\n", a % b);
}