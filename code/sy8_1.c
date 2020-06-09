#include <stdio.h>

int fib(int n) {
	if(n<1) return -1;
	if(n==1 || n==2) return 1;
	return fib(n-1)+fib(n-2);
}

int main() {
	printf("请输入一个整数:");
	int n;
	scanf("%d",&n);
	printf("fib[%d]=%d\n",n,fib(n));

}