#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,t;//n表示输入的score
	printf("请输入你的成绩(注：分数为1到100的整数）\n");
	scanf_s("%d", &n);
	t = (n > 100) || (n < 0);
	while ( t )
	 {
			printf("您的输入超出范围，请重新输入\n");
			fflush(stdin);
			scanf_s("%d", &n);
         	t = (n > 100) || (n < 0);	
	}
	if (n >= 90 && n <= 100)
		printf("你的成绩等级评定结果为A\n");
	else if (n >= 80 && n < 90)
		printf("你的成绩评定结果为B\n");
	else if (n >= 70 && n < 80)
		printf("你的成绩评定结果为C\n");
	else if (n >= 60 && n < 70)
		printf("你的成绩评定结果为D\n");
	else if (n >= 0 && n < 60)
		printf("你的成绩评定结果为E\n");
	    
	system("pause");


}