#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXLENGTH 100

int main() {
	
	char c;
	FILE* fp;


	fp = fopen("sookmyung.txt", "r");
	if (fp == NULL)
	{
		printf("wrong path.\n");
		return 0;
	}

	while ((c = fgetc(fp))!= EOF) // until the end of file(EOF)
								  // fp로부터 한 글자를 읽어오고 c에 대입
								  // 읽어온 글자가 EOF가 아니라면 출력
	{
		putchar(c);
	}

	fclose(fp);

	return 0;
}