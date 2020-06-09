#include <stdio.h>
int main() {
	double a,b,c;
	printf("分别输入三条边的值:");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(a>b) {
		int tmp=a;
		a=b;
		b=tmp;
	}
	if(a>c) {
		int tmp=a;
		a=c;
		c=tmp;
	}
	if(b>c) {
		int tmp=b;
		b=c;
		c=tmp;
	}
	if(a+b<=c) {
		printf("不是一个三角形\n");
	}else{
		if(a==b &&b==c) printf("是等边三角形\n");
		else if(a==b || b==c) printf("是等腰三角形!\n");
		else printf("是一般三角形!\n");
	}
}