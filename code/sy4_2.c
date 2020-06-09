#include<stdio.h>

int main()
{
	int i;
	char a,b,c,d;
	printf("请输入一个四位整数：");
	scanf("%d",&i);
	a=i/1000,b=(i%1000)/100,c=(i%100)/10,d=i%10;
	
	printf("该整数的逆序是%d%d%d%d\n",d,c,b,a); 
	
	return 0;
}