#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(void)
{
	int n, i, v[100], j, alt;
	while (scanf("%d", &n) != EOF) {
		double sum = 0;
		for (i = 0; i < n; i++) {
			scanf("%d", &v[i]);
		}
		for (i = 0; i < n; i++) {
			for (j = i + 1; j < n; j++) {
				if (v[j] > v[i]) {
					alt = v[i]; v[i] = v[j]; v[j] = alt;
				}
			}
		}
		for (i = 1; i < n - 1; i++) {
			sum = sum + v[i];
		}
		printf("%.2f\n", sum / (n - 2));
	}
	return 0;
}
