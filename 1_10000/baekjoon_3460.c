#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int cnt;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		int num;
		scanf("%d", &num);
		int cnt_2 = 0;
		while (1) {
			if (num < 2) {
				if (num == 1)
					printf("%d", cnt_2);
				break;
			}
			if (num % 2 == 1) {
				printf("%d ", cnt_2);
			}
			cnt_2++;
			num /= 2;

		}
		printf("\n");
	}
	return 0;
}