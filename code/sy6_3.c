#include <stdio.h>

int main() {
	long long sum=0;
	int i,j,n;
	printf("请输入n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		long long now=1;
		for(j=1;j<=i;j++) {
			now=now*i;
		}
		sum+=now;
	}
	printf("answer=%lld\n",sum);

}