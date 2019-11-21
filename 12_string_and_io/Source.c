#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100

int main() {
	
	char src[] = "The worst things to eat before you sleep";
	char dst[100];

	strcpy(dst, src);

	printf("copied string : %s", dst);

	return 0;
}