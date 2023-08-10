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
	int* sort_arr;
	sort_arr = (int*)malloc(10 * sizeof(int));
	for (int j = 0; j < cnt; j++) {
		for (int i = 0; i < 10; i++) scanf("%d", &sort_arr[i]);
		qsort(sort_arr, 10, sizeof(int), compare);
		printf("%d\n", sort_arr[7]);
	}
	return 0;
}