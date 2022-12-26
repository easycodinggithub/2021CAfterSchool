#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void re_fu(int n);
int main() {
	int n;
	scanf("%d", &n);
	for (int y = 0; y < n; y++)
	{
		for (int x = 0; x < n; x++)
		{
			re_fu(x, y, n);
		}
		printf("\n");
	}

	return 0;
}
void re_fu(int x, int y, int n) {
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1) {
		printf(" ");
	}
	else {
		if (n / 3 == 0) {
			printf("*");
		}
		else {
			re_fu(x, y, n/3);
		}
	} 
}

