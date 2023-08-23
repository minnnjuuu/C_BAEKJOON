#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// 내림차순 정렬 
int func_compare(const void* _a, const void* _b) {
	return (*(int*)_b - *(int*)_a);
}

int main(void) {
	int class_cnt;
	scanf("%d", &class_cnt);
	for (int i = 0; i < class_cnt; i++) {
		printf("Class %d\n", i + 1);
		int students;
		scanf("%d", &students);
		int* math_score;
		math_score = (int*)calloc(students, sizeof(int));
		for (int j = 0; j < students; j++) {
			scanf("%d", &math_score[j]);
		}
		qsort(math_score, students, sizeof(int), func_compare);
		int math_gap = 0;
		for (int j = 0; j < students - 1; j++) {
			if (math_gap < math_score[j] - math_score[j + 1])
				math_gap = math_score[j] - math_score[j + 1];
		}
		printf("Max %d, Min %d, Largest gap %d\n", math_score[0], math_score[students - 1], math_gap);
	}
	return 0;
}