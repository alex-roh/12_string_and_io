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
								  // fp�κ��� �� ���ڸ� �о���� c�� ����
								  // �о�� ���ڰ� EOF�� �ƴ϶�� ���
	{
		putchar(c);
	}

	fclose(fp);

	return 0;
}