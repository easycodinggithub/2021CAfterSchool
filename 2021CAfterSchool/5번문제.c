//5������
//���ڿ� �� ���� �Է� �޾� �� ���ڿ��� �ٿ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է� : h1 = Hi h2 = Hello
//��� : Hi Hello

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int cat(char *h1, char *h2);
int main() {
	char h1[50];
	char h2[50];

	gets(h1);
	gets(h2);
	cat(h1, h2);
	printf("%s", h1);

	return 0;
}
int cat(char* h1, char* h2) {
	int r1, r2;
	for (int i = 0; i < 50; i++)
	{
		if (h1[i] == '\0')
		{
			h1[i] = ' ';
			r1 = i + 1;
		}
	}
	for (int i = 0; i < 50; i++)
	{
		if (h2[i] == '\0')
		{
			r2 = i;
		}
	}

	for (int i = 0; i <= r2; i++)
	{
		h1[r1 + i] = h2[i];
	}
}
