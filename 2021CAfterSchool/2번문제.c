//2������
// 
//n�� �Է��ϸ� n���� �������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. ( ù ��° ���� 2�̴�. )
//( ������ : ���� �׿� ���ʷ� ������ ���� ���Ͽ� ������� ���� )
//
//�Է� : 10
//��� : 2 4 8 16 32 64 128 256 512 1024

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