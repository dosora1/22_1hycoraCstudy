//문자열 선언

#include <stdio.h>

void main() {
	char str1[] = "This is string";
	char str2[7] = "string";

	printf("이것은 문자열 상수입니다.\n"); // 문자열 상수

	printf("문자열 str1에 저장되어 있는 문자열은 \"%s\"입니다.\n", str1);
	printf("문자열 str2에 저장되어 있는 문자열은 \"%s\"입니다.\n", str2);
}