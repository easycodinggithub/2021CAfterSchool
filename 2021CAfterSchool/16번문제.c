//참고 자료 : 백준 1357번 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//어떤 수 X가 주어졌을 때, X의 모든 자리수가 역순이 된 수를 얻을 수 있다.Rev(X)를 X의 모든 자리수를 역순으로 만드는 함수라고 하자.예를 들어, X = 123일 때, Rev(X) = 321이다.그리고, X = 100일 때, Rev(X) = 1이다.
//
//두 양의 정수 X와 Y가 주어졌을 때, Rev(Rev(X) + Rev(Y))를 구하는 프로그램을 작성하시오

int Rev(int);

int main() {
	int X, Y, Z;

	scanf("%d %d", &X, &Y);

	Z = Rev(X) + Rev(Y);

	printf("%d \n", Rev(X));

	printf("%d \n", Rev(Y));

	printf("%d \n", Rev(Z));

	return 0;
}

int Rev(int Num) {

	int Sum = 0, Mul = 0, Tmp = 0;

	if (Num >= 100 && Num < 1000)
	{
		Mul = 100;
		Tmp = Num / Mul;
		Sum += Tmp;
		Sum += Mul * (Num - (Tmp * Mul));
	}




	if (Num >= 10 && Num < 100)
	{
		Mul = 10;
		Tmp = Num / Mul;
		Sum += Tmp;
		Sum += Mul * (Num - (Tmp * Mul));
	}
	
	
	/*if (Num >= 1 && Num < 10)
	{
		Mul = 1;
		Tmp = Num / Mul;
		Sum += Tmp;
		Sum += Mul * (Num - (Tmp * Mul));
	}*/

	return Sum;
}