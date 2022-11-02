#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int n,a,i;
	while (scanf("%d", &n) != EOF) {
		int sum = 1;
		for (i = 0; i < n; i++) {
			scanf("%d", &a);
			if (a % 2 == 1) sum = a * sum;
		}
		printf("%d\n", sum);
	}
	return 0;
}