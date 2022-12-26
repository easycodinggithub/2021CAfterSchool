//3번문제
//
//8개의 실수형 자료를 입력했을 때, 그중 최댓값을 찾는 프로그램을 작성하시오
//( 단 8개의 실수형 자료가 "음수"일 수도 있다. )
//
//입력 : 3.1 5.3 3.9 8.1 5.7 4.2 9.5 1.8
//출력 : 9.5

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find(float *arr);
int main() {
	float arr[8];
	float max;
	for (int i = 0; i < 8; i++)
	{
		scanf("%f", &arr[i]);
	}
	max = find(arr);
	printf("%.1f", max);
	return 0;
}

int find(float *arr) {
	float max = 0;
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
		}
	}
	return max;
}