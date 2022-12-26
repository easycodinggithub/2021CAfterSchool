//참고 자료 : 백준 1157번 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char Word[100];
	char Word_Score[50] = { 0, };
	int Big = 0, Big_Add = 0;
	scanf("%s", Word);

	for (int j = 0; j < 100; j++)
	{
		for (int i = 97; i <= 122; i++)
		{
			if ((int)Word[j] == i || ((int)Word[j]) == i - 32)
			{
				Word_Score[i - 97]++;
			}
		}
	}


	for (int i = 0; i < 50; i++)
	{
		printf("%d ", Word_Score[i]);
	}

	for (int i = 0; i < 50; i++)
	{
		if (Word_Score[i] >= Word_Score[Big])
		{
			Big = Word_Score[i];
			Big_Add = i;
		}
	}

	if ((int)Word[Big_Add + 97] >= 97 && (int)Word[Big_Add + 97] <= 122)
	{
		printf("%c", (char)(int)Word[Big_Add + 97] - 32);
		exit(0);
	}

	printf("%c", Word[Big_Add + 97]);
}