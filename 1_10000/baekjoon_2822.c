#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* score_2;
	score_2 = malloc(8 * sizeof(int));
	for (int i = 0; i < 8; i++)
		scanf("%d", &score_2[i]);
	int min = 100;
	for (int i = 0; i < 8; i++)
		if (score_2[i] < min) min = score_2[i];
	
	int min_second = 100;
	for (int i = 0; i < 8; i++)
		if (score_2[i]<min_second && score_2[i]>min) min_second = score_2[i];

	int min_third = 100;
	for (int i = 0; i < 8; i++)
		if (score_2[i]<min_third && score_2[i]>min_second) min_third = score_2[i];
	
	int cnt = 0;
	for (int i = 0; i < 8; i++)
		if (score_2[i] > min_third) cnt += score_2[i];
	printf("%d\n", cnt);
	for (int i = 0; i < 8; i++)
		if (score_2[i] > min_third) printf("%d ", i+1);
	return 0;
}