#include <stdio.h>

int prime(int k) {
	if(k==1) return 0;
	int i;
	for(i=2;i*i<=k;i++) {
		if(k%i==0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	printf("请输入n:");
	scanf("%d",&n);
	if(prime(n)==1) {
		printf("%d是一个素数\n",n);
	}else{
		printf("%d不是素数\n",n);
	}
}