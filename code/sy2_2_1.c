#include <stdio.h>

int main() {
	int a,b,c;
	printf("请输入三个数:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c) printf("最大值为: %d\n",a);
	else if(b>=a && b>=c) printf("最大值为: %d\n",b);
	else printf("最大值为: %d\n",c);
}