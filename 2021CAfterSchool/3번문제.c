//3������
//
//8���� �Ǽ��� �ڷḦ �Է����� ��, ���� �ִ��� ã�� ���α׷��� �ۼ��Ͻÿ�
//( �� 8���� �Ǽ��� �ڷᰡ "����"�� ���� �ִ�. )
//
//�Է� : 3.1 5.3 3.9 8.1 5.7 4.2 9.5 1.8
//��� : 9.5

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