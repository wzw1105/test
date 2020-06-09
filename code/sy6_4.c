#include <stdio.h>
int main() {
	printf("请输入n:");
	int n,i,v,max,min;
	scanf("%d",&n);
	printf("请输入n个整数:");
	for(i=1;i<=n;i++) {
		scanf("%d",&v);
		if(i==1) {
			max=min=v;
		}else{
			if(v>max)max=v;
			if(v<min)min=v;
		}
	}
	printf("最大值为:%d 最小值为:%d\n",max,min);
}