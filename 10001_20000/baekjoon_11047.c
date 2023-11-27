#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int coin_kind, money;
	int coin_cnt = 0;
	scanf("%d %d", &coin_kind, &money);
	int arr_money[15];
	for (int i = 0; i < coin_kind; i++) {
		scanf("%d", &arr_money[i]);
	}
	for (int i = coin_kind - 1; i >=0; i--) {
		if (arr_money[i] <= money) {
			coin_cnt = coin_cnt + money / arr_money[i];
			money = money % arr_money[i];
			if (money == 0) break;
		}
	}
	printf("%d", coin_cnt);
}