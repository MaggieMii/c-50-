#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("«Î ‰»Îa£∫"); scanf("%d", &a);
	printf("«Î ‰»Îb£∫"); scanf("%d", &b);
	printf("«Î ‰»Îc£∫"); scanf("%d", &c);

	if (a + b <= c || a + c <= b || b + c <= a) puts("0");
	else if (a == b && b == c) puts("1");
	else if (a == b && b != c)puts("2");
	else if (a != b && b == c)puts("2");
	else if (a == c && b != c)puts("2");
	else puts("3");

		return 0;
}