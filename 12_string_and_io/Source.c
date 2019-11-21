#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXLENGTH 100

int main() {
	
	int i = 0;
	char str[4];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';

	printf("%s\n", str);

	return 0;
}