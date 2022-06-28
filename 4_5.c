// 문자열 복사/붙이기

#include <stdio.h>
#include <string.h>

void main() {
	char str1[] = "Hello";
	char str2[] = "Hycora";

	char Strcpy[100], Strcat[100] = "";
	int Strlen;

	//복사
	strcpy(Strcpy, str1);
	printf("Strcpy : %s\n", Strcpy);
	strcpy(Strcpy, str2);
	printf("Strcpy : %s\n", Strcpy);

	//복사
	strcat(Strcat, str1);
	printf("Strcat : %s\n", Strcat);
	strcat(Strcat, str2);
	printf("Strcat : %s\n", Strcat);
}
