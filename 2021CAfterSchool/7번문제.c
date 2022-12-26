#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h> //C¾ð¾î
#include <string.h>

int main() {
	char Message[20], Result[20] = { 0, };
	scanf("%s", Message);

	int Length = strlen(Message);
	//printf("%d", Length);
	for (int i = 0; i < Length; i++)
	{
		if ((Message[i] >= 65 && Message[i] <= 99) || (Message[i] >= 97 && Message[i] <= 122))
		{
			Message[i] = Result[i];
		}
		else if (Message[i] >= 34 && Message[i] <= 42) {
			int Count = Message[i];
			for (int j = 1; j <= Count; j++)
			{
				//printf("%d", j);
				printf("%c", Result[i - j]);
			}
		}
	}
	//printf("%s", Message);
	//printf("%s", Result);
}
