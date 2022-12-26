//2번문제
// 
//n을 입력하면 n개의 등비수열을 출력하는 프로그램을 작성하시오. ( 첫 번째 항은 2이다. )
//( 등비수열 : 이전 항에 차례로 일정한 값을 곱하여 만들어진 수열 )
//
//입력 : 10
//출력 : 2 4 8 16 32 64 128 256 512 1024

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int k = 1;
int geometric();
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		geometric();
	}
	return 0;
}

int geometric() {
	k *= 2;
	printf("%d ", k);
	return 0;
}