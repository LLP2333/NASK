#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int year, month, flag;
	printf("请输入年份\n");
	scanf("%d",&year);
	if ((0 == year % 4 && 0 != year % 100) || 0 == year % 400)
		flag = 1;
	else
		flag = 0;
	fflush;
	printf("请输入月份\n");
	scanf("%d", &month);
	while ((month > 12) && (month < 1))
	{
		printf("您输入的月份非法，请重新输入\n");
		fflush;
		scanf("%d", &month);
	}
	switch (month)
	{
	case 1:
		printf("%d年%d月有31天",year, month);
		break;
	case  2: if (0 == flag)
		printf("%d年%d月有29天",year, month);
		   else
		printf("%d年%d月有28天", year,month);
		break;
	case 3 : 
		printf("%d年%d月有31天", year, month);
		break;
	case 4:
		printf("%d年%d月有30天", year, month);
		break;
	case 5:
		printf("%d年%d月有31天", year, month);
		break;
	case 6:
		printf("%d年%d月有30天", year, month);
		break;
	case 7:
		printf("%d年%d月有31天", year, month);
		break;
	case 8:
		printf("%d年%d月有31天", year, month);
		break;
	case 9:
		printf("%d年%d月有30天", year, month);
		break;
	case 10:
		printf("%d年%d月有31天", year, month);
		break;
	case 11:
		printf("%d年%d月有30天", year, month);
		break;
	case 12:
		printf("%d年%d月有31天", year, month);
		break;
	}
	system("pause");






}