#include <stdio.h>

int main() {
	double now=100;
	double ans=100;
	int i;
	for(i=2;i<=10;i++) {
		ans+=now;
		now/=2;
	}
	printf("一共经过%lf米,第十次反弹%lf米\n",ans,now/2);
}