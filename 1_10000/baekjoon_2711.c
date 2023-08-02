#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int cnt;
	scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++) {
		int num;
		char str[100];
		scanf("%d %s", &num, str);
		for (int x = 0; x < strlen(str); x++) {
			if (x != num - 1)
				printf("%c", str[x]);
		}
		printf("\n");
	}
	return 0;
}