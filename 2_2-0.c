/*
if�� ���� : ������ ��� ���
���� ������
*/

#include <stdio.h>

void main() {
	int score = 2;

	if (score >= 90) {
		printf("you get A\n");
	}
	else if (score >= 80) {
		printf("you get B\n");
	}
	else if (score >= 70) {
		printf("you get C\n");
	}
	else if (score >= 60) {
		printf("you get D\n");
	}
	else { // 59������ ���
		printf("you get F. ����� ����!\n");
	}
}