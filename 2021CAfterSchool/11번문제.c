//참고 자료 : 백준 2755번 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> //C언어

int main() {
	int N, Credit, Credit_Sum = 0;
	char Subject[100], Grade[100], Temp_a, Temp_b;
	float Temp_ten = 0, Sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%s %d %c%c", Subject, &Credit, &Temp_a, &Temp_b);
		if (Temp_a == 'A')
		{
			Temp_ten = 4;
		}
		else if (Temp_a == 'B')
		{
			Temp_ten = 3;
		}
		else if (Temp_a == 'C')
		{
			Temp_ten = 2;
		}
		else if (Temp_a == 'D')
		{
			Temp_ten = 1;
		}
		else {
			Temp_ten = 0;
		}

		if (Temp_b == '+')
		{
			Temp_ten += 0.3;
		}
		else if (Temp_b == '-')
		{
			Temp_ten += 0.7;
		}
		else {
			Temp_ten += 0;
		}
		Sum += Temp_ten * Credit;
		Credit_Sum += Credit;
	}

	printf("%.2lf", floor((Sum / Credit_Sum) + 0.5));

	return 0;
}