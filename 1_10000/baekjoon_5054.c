#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int test_case;
	scanf("%d\n", &test_case);
	for (int i = 0; i < test_case; i++) {
		int store;
		scanf("%d\n", &store);
		int dist_min = 100, dist_max = 0;
		for (int j = 0; j < store; j++) {
			int compare_distance;
			scanf("%d", &compare_distance);
			if (compare_distance > dist_max) dist_max = compare_distance;
			if (compare_distance < dist_min) dist_min = compare_distance;
		}
		printf("%d\n",2*(dist_max-dist_min));
	}
	return 0;
}