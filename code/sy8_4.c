#include <stdio.h>
int a[11];

int main() {
	int i,j;
	printf("请输入10个整数:");
	for(i=1;i<=10;i++) {
		scanf("%d",&a[i]);
	}

	for(i=1;i<=10;i++) {
		for(j=i+1;j<=10;j++) {
			if(a[i]>a[j]) {
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
	printf("排序结果为:");
	for(i=1;i<=10;i++) {
		printf("%d",a[i]);
		if(i==10) printf("\n");
		else printf(" ");
	}
}