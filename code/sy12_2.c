#include<stdio.h>

typedef struct{
	int year,month,day;
}date;

int days(date x) {
	int sum=0;
	switch(x.month)
	{
		case 1:
			sum=0;
			break;
		case 2:
			sum=31;
			break;
		case 3:
			sum=59;
			break;
		case 4:
			sum=90;
			break;
		case 5:
			sum=120;
			break;
		case 6:
			sum=151;
			break;
		case 7:
			sum=181;
			break;
		case 8:
			sum=212;
			break;
		case 9:
			sum=243;
			break;
		case 10:
			sum=273;
			break;
		case 11:
			sum=304;
			break;
		case 12:
			sum=334;
			break;
		default:
			printf("Error with month!");
			break;
	}
	sum=sum+x.day;
	if((x.year%400==0||(x.year%4==0&&x.year%100!=0))&&x.month>2)
	{
		sum++;
	}
	return sum;
}

int main() {
	date n;
	printf("请输入年月日:");
	scanf("%d %d %d",&n.year,&n.month,&n.day);
	printf("是本年的第%d天\n",days(n));
}