#include <stdio.h>

int main() {
	int sum=0,i;
	for(i=1;i<=200;i++) {
		if(i%3==0&&i%5!=0) {
			sum+=i;
		}
	}
	printf("1至200之间能被3整除但不能被5整除的数之和为: %d\n",sum);

}