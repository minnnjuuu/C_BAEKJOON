#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void pop(int* top) {
	(*top)--;
}

int main(void) {
	int chance;
	scanf("%d", &chance);
	int* money_num;
	int cnt = 0;
	int arr_cnt = 0;
	int top = -1;
	int choose_num;
	money_num = (int*)calloc(chance, sizeof(int));
	for (int i = 0; i < chance; i++) {
		scanf("%d", &choose_num);
		if (choose_num == 0) {
			cnt -= money_num[arr_cnt - 1];
			pop(&top);
			arr_cnt--;
		}
		else {
			money_num[arr_cnt] = choose_num;
			cnt += choose_num;
			arr_cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}