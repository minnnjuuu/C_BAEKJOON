#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int score[5] = { 0 };
	for (int i = 0; i < 5; i++) {
		int num1, num2, num3, num4=0;
		scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
		score[i] = num1 + num2 + num3 + num4;
	}
	int max_num = score[0];
	int max_index = 0;
	for (int i = 1; i < 5; i++)
		if (max_num < score[i])
			max_num = score[i], max_index = i;
	printf("%d %d", max_index + 1, max_num);
	return 0;
}