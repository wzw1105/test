#include <stdio.h>

int main() {
	int i,j;
	long long ans=0;
	for(i=1;i<20;i++) {
		long long now=1;
		for(j=1;j<=i;j++) {
			now=now*j;
		}
		ans=ans+now;
	}
	printf("%lld\n",ans);
}