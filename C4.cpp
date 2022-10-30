#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("请输入正整数a：");
	scanf("%d", &a);
	printf("请输入正整数b：");
	scanf("%d", &b);
	int max, min;
	if (a > b) { max = a; min = b; }
	else { max = b; min = a; }
	int d = 1;
	int result;
	while (d>0)
	{
		d = max % min;
		result = min;
		min = d;
	}
	printf("两个正整数的最大公约数为%d", result);
}