#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char sex ,sports,diet;
	float faHeight,moHeight,n;
	int tr1,tr2;
	printf("本程序用来预测身高，请按顺序依次一次性输入以下内容\n");//输入数据一定要逗号隔开
	printf("请输入你的性别（M/F)\n");
	printf("是否喜欢体育锻炼(Y/N)\n");
	printf("是否有良好的饮食习惯(Y/N)\n");
	tr1=scanf("%c, %c, %c",&sex,&sports,&diet);
	/*while (tr1 != 3)
	{
		printf("请按照正确的格式输入数据\n");
		fflush(stdin);
		tr1 = scanf("%c, %c, %c", &sex, &sports, &diet);

	}*/
	fflush(stdin);
	printf("接下来让我们输入你的父亲 母亲身高\n");//输入数据一定要记得用逗号隔开
	scanf("%f,%f",&faHeight,&moHeight);
	if('M'==sex)
		n =(faHeight+moHeight)*(0.54);
	else
		n=(faHeight*(0.923)+moHeight)/2;
	if('Y'==sports)
		n=1.02*n;
	if('Y'== diet)
		n=1.015*n;
	printf("你的预测身高为%f cm",n);
	printf("\n");
	system("pause");
}


