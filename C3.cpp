#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int i, j, len;
	len = 5;
	for (i = 1; i <= 3; i++) {
			for (j = 1; j <= i - 1; j++)
				putchar(' ');
			for (j = 1; j <= len-2*(i-1); j++)
				putchar('*');
			for (j = 1; j <= i - 1; j++)
				putchar(' ');
			putchar('\n');
		}
	for (i = 2; i >= 1;i--) {
		for (j = 1; j <= i - 1; j++)
			putchar(' ');
		for (j = 1; j <= len - 2 * (i - 1); j++)
			putchar('*');
		for (j = 1; j <= i - 1; j++)
			putchar(' ');
		putchar('\n');
	}
		return 0;
}