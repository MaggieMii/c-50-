#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("������������a��");
	scanf("%d", &a);
	printf("������������b��");
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
	printf("���������������Լ��Ϊ%d", result);
}