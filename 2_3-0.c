/*
조건문 응용
연습 : 
*/

#include <stdio.h>

void main() {
	int a = 5;
	int b = 2;
	int c = 3;
	int d = 4;

	//and
	if (a > b && a > c && a>d) {
		printf("a is bigger than b,c, and d!\n");
	}

	//or
	else if (a > b || a > c || a > d) {
		printf("a is bigger than something, maybe.");
	}

	//not
	else if (!a) { // 0이라면
		printf("a is zero.\n");
	}
	
	else { // 해당사항이 없다면
		printf("nothing happened\n");
	}
}