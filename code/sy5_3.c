#include <stdio.h>

int main() {
	int base=1,a,n,i;
	printf("请输入a与n:");
	scanf("%d %d",&a,&n);
	if(a<0||a>9) {
		printf("a值不能小于0或者大于9\n");
		return 0;
	}
	int sum=0;
	for(i=n;i>=1;i--) {
		sum=sum+i*base*a;
		base=base*10;
	}
	printf("%d\n",sum);

}