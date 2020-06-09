#include<stdio.h>

int main() {
	double x,min;
	int i;
	printf("请依次输入10个实型数据:");
	for(i=1;i<=10;i++) {
		scanf("%lf",&x);
		if(i==1) min=x;
		else if(x<min) min=x;
	}
	printf("最小数为：%lf\n",min);
}