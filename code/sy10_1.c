#include <stdio.h>
int a[11];
int main() {
	int v,sum=0,m=0,i;
	printf("请输入10个整数:");
	for(i=1;i<=10;i++) {
		scanf("%d",&v);
		if(v%2==0) {
			++m;
			a[m]=v;
			sum+=v;
		}
	}
	printf("偶数个数为:%d, 所有偶数为:",m);
	for(i=1;i<=m;i++) {
		printf("%d",a[i]);
		if(i==m) printf("\n");
		else printf(" ");
	}
	printf("所有偶数的平均数为:%d\n",sum/m);
}