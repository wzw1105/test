#include <stdio.h>

long long fac(int k) {
	if(k==0) return 1;
	return fac(k-1)*k;
}

int main() {
	printf("请输入一个整数:");
	int n;
	scanf("%d",&n);
	printf("%lld\n",fac(n));
}