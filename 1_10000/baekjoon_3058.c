#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int repeat;
	scanf("%d", &repeat);
	for (int i = 0; i < repeat; i++) {
		int* num_arr;
		num_arr = (int*)calloc(7, sizeof(int));
		int even_cnt = 0;
		int even_min = 100;
		for (int j = 0; j < 7; j++) {
			scanf("%d", &num_arr[j]);
			if (num_arr[j] % 2 == 0) {
				even_cnt += num_arr[j];
				if (num_arr[j] < even_min)
					even_min = num_arr[j];
			}
		}
		printf("%d %d\n", even_cnt, even_min);
	}
	return 0;
}