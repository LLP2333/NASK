#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char  n;
	printf("请输入一个字符\n");
	n = getchar();
	if (n >= '0' && n <= '9')
	{
		printf("该字符为数学字符\n");
	}
	else if (n >= 'A' && n <= 'Z')
	{
		printf("该字符为大写字母\n");
	}
	     else if (n >= 'a' && n <= 'z')
		printf("该字符为小写字母");
	          else   if (' ' == n)
		printf("该字符为空格");
	                 else  printf("该字符为其他字符");
		system("pause");

}