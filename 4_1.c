// while 1

#include <stdio.h>

void main() {
	int cnt = 0;
	while (1)
	{
		if (cnt > 5) break;
		printf("%d번째 출력\n", cnt);
		cnt++;
	}
	printf("반복문 끝!\n");
}

