// ���ڿ� ����/��
//int strcmp(const char* str1, const char* str2);
//int strncmp
//size_t strlen(const char* str);

#include <stdio.h>
#include <string.h>

void main() {
	char str1[] = "Hello";
	char str2[] = "hycora";
	char str3[] = "Hycora2";

	int Strlen1, Strlen2;

	Strlen1 = strlen(str1);
	Strlen2 = strlen(str2);

	printf("str1�� ���� : %d\n", Strlen1);
	printf("str2�� ���� : %d\n", Strlen2);

	// strcmp(a,b)�� ��, �տ� ���� ���������� �켱�̸� -1, ���������� ������ 1, ������ 0
	printf("str1, str2 ������ �� ��� �� : %d\n", strcmp(str1, str2));
	printf("str3, str2 ������ �� ��� �� : %d\n", strcmp(str3, str2));
	printf("str2, str3 strncmp�� ������ �� ��� �� : %d\n", strncmp(str2, str3, Strlen2));
}

