#include <stdio.h>

int main() {
	int a,b,c;
	printf("请输入三个数:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b) {
		if(c>=a) printf("最大值为: %d\n",c);
		else printf("最大值为: %d\n",a);
	}else{
		if(c>=b) printf("最大值为: %d\n",c);
		else printf("最大值为: %d\n",b);	
	}
}