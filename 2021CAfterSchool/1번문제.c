//1번문제
//
//<보기 1>을 <보기 2> 형태로 바꾸는 프로그램을 작성하시오
//
//< 보기 1 >
//  1 2 3
//  4 5 6
//  7 8 9
//
//< 보기 2 >
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
	printf("기존 이차원 배열\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("행과 열을 바꾼 이차원 배열\n");
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

