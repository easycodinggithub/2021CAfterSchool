#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int AddVong, RangeVong, FindVong;

	scanf("%d %d %d", &AddVong, &RangeVong, &FindVong);

	//printf("dd");

	int FirstNum_init = 1;
	
	int FirstNum = 1, CountNum = 0;

	while (1)
	{
		if (FirstNum_init >= 1000)
		{
			return 0;
		}

		printf("%d : FirstNum_init \n", FirstNum_init);
		printf("%d : FirstNum \n", FirstNum);
		printf("%d : CountNum \n", CountNum);

		if (FirstNum >= 12000) {
			FirstNum_init += RangeVong;
			FirstNum = FirstNum_init;
		}

		for (int i = FirstNum; i <= FirstNum + RangeVong; i++)
		{
			CountNum++;
			if (i == FindVong)
			{
				printf("%d", CountNum);
				return 0;
			}
		}

		CountNum--;

		FirstNum += AddVong;
	}
	return 0;
}
