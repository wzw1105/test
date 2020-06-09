#include <stdio.h>

int main() {
	int a,b,c;
	printf("请输入三个数:");
	scanf("%d %d %d",&a,&b,&c);
	int maxv=a;
	if(a<b) maxv=b;
	if(c>maxv) maxv=c;
	printf("最大值为: %d\n",maxv);
}