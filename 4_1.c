// while 1

#include <stdio.h>

void main() {
	int cnt = 0;
	while (1)
	{
		if (cnt > 5) break;
		printf("%d��° ���\n", cnt);
		cnt++;
	}
	printf("�ݺ��� ��!\n");
}

