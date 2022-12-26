//4번문제
//두 문자열의 크기를 비교하여 크기가 더 큰 문자열을 출력하는 프로그램을 작성하시오.
//( 두 문자열의 크기가 같을 경우, "같다" 출력 )
//
//입력 : h1 = my magazine h2 = my magazinel
//출력 : my magazinel

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	char h1[50];
	char h2[50];

	printf("h1 = ");
	scanf("%s", h1);
	printf("h2 = ");
	scanf("%s", h2);

	if (strcmp(h1, h2) == 0) {
		printf("같다.");
		return 0;
	};

	int len1 = strlen(h1);
	int len2 = strlen(h2);

	int sum1 = 0, sum2 = 0;

	if (len1 > len2){
		printf("%s", h1);
	}
	else if (len2 > len1) {
		printf("%s", h2);
	}
	else {
		for (int i = 0; i < len1; i++){
			sum1 += h1[i];
		}
		for (int i = 0; i < len2; i++){
			sum2 += h2[i];
		}

		if (sum1 > sum2){
			printf("%s", h1);
		}
		else {
			printf("%s", h2);
		}
	}

	return 0;
}