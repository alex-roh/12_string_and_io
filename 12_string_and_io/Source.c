#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXLENGTH 100

int main() {
	
	FILE* file_ptr;
	file_ptr = fopen("sookmyung.txt", "r");
	char text[MAXLENGTH];

	int i;
	for (i = 0; i < 3; i++)
	{
		fscanf_s(file_ptr, "%s", text);
		printf("%s\n", text);
	}

	fclose(file_ptr);
	
	return 0;
}