#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int i,j,count;
	count = 0;
	for ( i = 2; i <=100; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0) break;
		}
		if (i == j)
		{
			count++;
			if (count % 5 == 0)printf("%3d\n", i);
			else printf("%3d", i);

		}
	}
	return 0;
}