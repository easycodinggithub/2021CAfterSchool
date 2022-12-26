#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char day[7][100] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	int Y, M, D, R = 0;

	scanf("%d", &Y);
	scanf("%d", &M);
	scanf("%d", &D);

	for (int i = 1; i <= Y; i++)
	{
		if ((Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0)
		{
			month[1] = 29;
		}else{
			month[1] = 28;
		}

		for (int j = 1; j <= 12; j++)
		{
			for (int k = 1; k <= month[j-1]; k++)
			{
				R++;
				if (i == Y && j == M && k == D)
				{
					printf("%s", day[R % 7]);
				}
			}
		}
	}

	return 0;
}