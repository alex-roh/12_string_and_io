#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100

int main() {
	
	char str[30] = "Happy C programming!";

	printf("문자열 \"%s\"의 길이: %i\n", str, strlen(str));

	return 0;
}