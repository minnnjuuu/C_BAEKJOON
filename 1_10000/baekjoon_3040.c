#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cnt = 0;
	int* arr_cm;
	arr_cm = (int*)calloc(9, sizeof(int));
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr_cm[i]);
		cnt += arr_cm[i];
	}
	cnt = cnt - 100;
	int a, b;
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (arr_cm[i] + arr_cm[j] == cnt) {
				a = arr_cm[i];
				b = arr_cm[j];
				break;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		if (arr_cm[i] != a && arr_cm[i] != b)
			printf("%d\n", arr_cm[i]);
	}
	return 0;
}