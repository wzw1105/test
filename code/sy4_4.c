#include<stdio.h>
int main()
{
	int i,a,b,c,d;
	printf("请输入一个5位整数：");
	scanf("%d",&i);
	
	a=i/10000,d=i%10;
	b=(i%10000)/1000,c=(i%100)/10;
	
	if(a==d&&b==c)
	{
		printf("Yes"); 
	} 
	else
	{
	 	printf("No");
	}
	
	return 0;
 } 