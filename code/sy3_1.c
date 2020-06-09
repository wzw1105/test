#include <stdio.h>

int main() {
	printf("请输入x的值: ");
	int a;
	scanf("%d",&a);
	if(a<1){
		printf("Y=%7.2lf\n",(double)a);
	}else if(a>=1 && a<=10) {
		printf("Y=%7.2lf\n",(double)(2*a-1));
	}else{
		printf("Y=%7.2lf\n",(double)(3*a-11));
	}
}