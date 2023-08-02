#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int num = 1, num2 = 1, cnt = 0;

	scanf("%d %d", &a, &b);

	for (int i = 0; i <= b; i++)            
	{
		if (a <= i)                        
		{
			cnt += num2;
		}
		if (num > num2)                      
		{
			num2++;
			num = 1;
		}
		num++;          
	}
	printf("%d\n", cnt);
	return 0;
}
