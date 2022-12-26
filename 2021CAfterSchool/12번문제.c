//참고 자료 : 백준 16917번 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
int A = 0, B = 0, C = 0, X = 0, Y = 0, S = 0;
scanf("%d %d %d %d %d", &A, &B, &C, &X, &Y);

while (1) {
	if (X > Y) {
		S += A;
		--X;
	}
	else if (X < Y) {
		S += B;
		--Y;
	}
	else {
		break;
	}
}

printf("%d", S);

if (A*X+B*Y > C*X*2)
{
	S += C * X * 2;
}
else {
	S += A * X + B * Y;
}

printf("%d", S);

return 0;
}
