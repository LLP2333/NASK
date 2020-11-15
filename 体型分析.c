#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float  w, h, t;//体重为w,身高为h
	printf("请输入你的身高（m)和体重(kg)\n");//两个数据逗号隔开
	scanf("%f,%f", &h, &w);
	t = w / (h * h);
	if (t < 18)
		printf("你的体重属于低体重\n");
	else if (t >= 18 && t < 25)
	    printf("你的体重属于正常体重\n");
	else if (t >= 25 && t < 27)
	    printf("你的体重属于超重体重\n");
	else 
		printf("你的体重属于肥胖\n");
	//printf("t=%f", t);
	//printf("w=%f,h=%f", w, h);
	system("pause");
}