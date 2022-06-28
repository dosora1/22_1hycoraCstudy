// 문자열 길이/비교
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

	printf("str1의 길이 : %d\n", Strlen1);
	printf("str2의 길이 : %d\n", Strlen2);

	// strcmp(a,b)일 때, 앞에 것이 사전순으로 우선이면 -1, 사전순으로 뒤지면 1, 같으면 0
	printf("str1, str2 비교했을 때 출력 값 : %d\n", strcmp(str1, str2));
	printf("str3, str2 비교했을 때 출력 값 : %d\n", strcmp(str3, str2));
	printf("str2, str3 strncmp로 비교했을 때 출력 값 : %d\n", strncmp(str2, str3, Strlen2));
}

