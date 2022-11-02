#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main(void)
{
	int n, i, j, alt;
	int v[100]={0};
	while(scanf("%d",&n)!=EOF)
	{
		if (n == 0)
			break;
		else
			for (i = 0; i < n; i++)
			{
				scanf("%d", &v[i]);
			}
		for (i = 0; i <n; i++)
			{
			for (j = i+1;j<n ; j++)
			{
				if (abs(v[j]) > abs(v[i])) {
					alt = v[i]; v[i] = v[j]; v[j] = alt;
				}
			}
			}
		for (i = 0; i < n-1; i++)
		{
			printf("%d ", v[i]);
		}
		printf("%d\n", v[n-1]);
		
	}

	return 0;
}