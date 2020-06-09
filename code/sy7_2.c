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
	int i;
	for(i=1;i<=100;i++) {
		if(prime(i)==1) {
			printf("%d\n",i);
		}
	}
}