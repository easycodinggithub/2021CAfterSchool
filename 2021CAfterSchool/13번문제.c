#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A = 0, B = 0, C = 0, X = 0, Y = 0, S = 1000000000, Big = 0, SS[3], Sma = 0;
	scanf("%d %d %d %d %d", &A, &B, &C, &X, &Y);

	if (X > Y)
	{
		Big = X;
		Sma = Y;
	}
	else {
		Big = Y;
		Sma = Y;
	}

	SS[0] = A * X + B * Y;

	SS[1] = C * Big * 2;

	if (Big == X)
	{
		SS[2] = C * Sma * 2 + A * (Big - Sma);
	}
	else if (Big == Y) {
		SS[2] = C * Sma * 2 + B * (Big - Sma);
	}

	for (int i = 0; i < 3; i++)
	{
		if (SS[i] <= S)
		{
			S = SS[i];
		}
	}

	printf("%d", S);

	return 0;
}
