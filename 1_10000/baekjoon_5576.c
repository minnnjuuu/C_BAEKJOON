#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int func_compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main(void) {
	int* w_univ;
	int* k_univ;
	int w_cnt;
	int k_cnt;
	w_univ = (int*)calloc(10, sizeof(int));
	k_univ = (int*)calloc(10, sizeof(int));
	for (int i = 0; i < 10; i++)
		scanf("%d", &w_univ[i]);
	for (int i = 0; i < 10; i++)
		scanf("%d", &k_univ[i]);
	qsort(w_univ, 10, sizeof(int), func_compare);
	qsort(k_univ, 10, sizeof(int), func_compare);
	w_cnt = w_univ[7] + w_univ[8] + w_univ[9];
	k_cnt = k_univ[7] + k_univ[8] + k_univ[9];
	printf("%d %d\n", w_cnt, k_cnt);
	return 0;
}