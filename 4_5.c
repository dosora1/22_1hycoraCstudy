// ���ڿ� ����/���̱�

#include <stdio.h>
#include <string.h>

void main() {
	char str1[] = "Hello";
	char str2[] = "Hycora";

	char Strcpy[100], Strcat[100] = "";
	int Strlen;

	//����
	strcpy(Strcpy, str1);
	printf("Strcpy : %s\n", Strcpy);
	strcpy(Strcpy, str2);
	printf("Strcpy : %s\n", Strcpy);

	//����
	strcat(Strcat, str1);
	printf("Strcat : %s\n", Strcat);
	strcat(Strcat, str2);
	printf("Strcat : %s\n", Strcat);
}
