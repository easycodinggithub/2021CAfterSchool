//���� �ڷ� : ���� 1357�� ����

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//� �� X�� �־����� ��, X�� ��� �ڸ����� ������ �� ���� ���� �� �ִ�.Rev(X)�� X�� ��� �ڸ����� �������� ����� �Լ���� ����.���� ���, X = 123�� ��, Rev(X) = 321�̴�.�׸���, X = 100�� ��, Rev(X) = 1�̴�.
//
//�� ���� ���� X�� Y�� �־����� ��, Rev(Rev(X) + Rev(Y))�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�

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