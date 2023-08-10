#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second) return 1;
	else if (*(int*)first < *(int*)second) return -1;
	else return 0;
}

int main(void) {
	int cnt;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		int* score_arr;
		score_arr = (int*)malloc(5 * sizeof(int));
		scanf("%d %d %d %d %d", &score_arr[0], &score_arr[1], &score_arr[2], &score_arr[3], &score_arr[4]);
		qsort(score_arr, 5, sizeof(int), compare);
		if (score_arr[3] - score_arr[1] >= 4) printf("KIN\n");
		else printf("%d\n", score_arr[1] + score_arr[2] + score_arr[3]);
	}
	return 0;
}