#include<stdio.h>
#include<stdlib.h>
int max(int,int);
int main(void)
{    
    int a,b,c,d;
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("请输入两个整数\n");
    scanf("%d,%d",&a,&b);
    c=max(a,b);
    if(c==a)
    {

        d=b;
    }
    else
    {
        d=a;
    }
    printf("从小到大为%d %d\n",d,c);
    system("pause");
    
}
int max(int x,int y)
{
    int z;
    if(x>y)
    {
        z=x;
    }
    else z=y;
    return z;
}