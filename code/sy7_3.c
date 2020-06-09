#include <stdio.h>

int ok(int a) {
	if((a % 4 == 0 && a % 100 != 0) || a % 400 == 0) return 1;
	else return 0;
}

int main() {
	int i;
	for(i=1900;i<=2100;i++) {
		if(ok(i)) printf("%d年是闰年\n",i);
	}
}