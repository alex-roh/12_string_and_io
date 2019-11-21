#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXLENGTH 100

int main() {
	
	FILE* file_ptr;
	file_ptr = fopen("sookmyung.txt", "w");
	char text[MAXLENGTH];

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("input a word: ");
		scanf("%s", &text);
		fprintf(file_ptr, "%s\n", text);
	}

	fclose(file_ptr);
	
	return 0;
}