//1������
//
//<���� 1>�� <���� 2> ���·� �ٲٴ� ���α׷��� �ۼ��Ͻÿ�
//
//< ���� 1 >
//  1 2 3
//  4 5 6
//  7 8 9
//
//< ���� 2 >
//  1 4 7
//  2 5 8
//  3 6 9

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;
	int a[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	printf("���� ������ �迭\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("��� ���� �ٲ� ������ �迭\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	return 0;
}

