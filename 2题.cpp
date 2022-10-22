#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int a, b,result;

	printf("请输入第一门科目的成绩："); scanf("%d", &a);
	printf("请输入第二门科目的成绩："); scanf("%d", &b);

	switch (a/10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:puts("it is not pass."); break;
	case 6:
	case 7:
	case 8:
	case 9: switch (b / 10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:puts("it is not pass."); break;
	case 6:
	case 7:
	case 8:
	case 9:puts("it is pass."); break;
	case 10:if (a % 10)puts("it is error");
		   else puts("it is pass"); break;
	default:puts("it is error."); break;
	}break;

	case 10: if (a % 10)puts("it is error");
		   else switch (b / 10)
	{
		   case 0:
		   case 1:
		   case 2:
		   case 3:
		   case 4:
		   case 5:puts("it is not pass."); break;
		   case 6:
		   case 7:
		   case 8:
		   case 9:puts("it is pass."); break;
		   case 10:if (a % 10)puts("it is error");
				  else puts("it is pass"); break;
		   default:puts("it is error."); break;
	}break;
	default:puts("it is error.");break;
	}
		return 0;
}

