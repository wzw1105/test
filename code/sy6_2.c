#include <stdio.h>

int main() {
	int i;
	for(i=100;i<=999;i++) {
		int a=(i%10),b=(i/10)%10,c=(i/100);
		if(a*a*a+b*b*b+c*c*c==i) {
			printf("%d\n",i);
		}
	}
}