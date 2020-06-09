#include<stdio.h>

int main()
{
	int i;
	printf("请输入一个整数哦:");
	scanf("%d",&i);
	
	if(1==i%2)
	{
		printf("%d是一个奇数\n",i);
	}
	else
	{
		printf("%d是一个偶数\n",i); 
	}
	
	return 0;
}