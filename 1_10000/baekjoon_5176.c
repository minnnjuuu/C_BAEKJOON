#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int cnt;
	scanf("%d\n", &cnt);
	for (int i = 0; i < cnt; i++) {
		int people, seat;
		scanf("%d %d\n", &people, &seat);
		int* seat_choose;
		seat_choose = (int*)calloc(people, sizeof(int));
		for (int j = 0; j < people; j++) {
			int favorite;
			scanf("%d", &favorite);
			seat_choose[favorite - 1]++;
		}

		int sum = 0;
		for (int j = 0; j < people; j++)
			if (seat_choose[j] > 1) 
				sum += (seat_choose[j] - 1);
		printf("%d\n", sum);
	}
	return 0;
}
// 반례 
//1
//4 6
//1
//6
//6
//6
//내 답 : 0
//원래 답 : 2
