#include <stdio.h>

int main() {
	int sum=0,i;
	for(i=1;i<=200;i++) {
		if(i%2==1) {
			sum+=i;
		}
	}
	printf("1至200之间所有奇数之和为:%d\n",sum);
}