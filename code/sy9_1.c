#include <stdio.h>

int a[11],b[11],c[11];

int main() {
	int i,lenb=0,lenc=0,sum=0;
	printf("请输入10个整数:");
	for(i=1;i<=10;i++) {
		scanf("%d",&a[i]);
		sum+=a[i];
		if(a[i]<60) {
			lenb++;
			b[lenb]=a[i];
		}else{
			lenc++;
			c[lenc]=a[i];
		}
	}
	printf("平均成绩为:%.2lf\n",(double)sum/10);
	printf("一共有%d人不及格,这些分数是:",lenb);
	for(i=1;i<=lenb;i++) {
		printf("%d",b[i]);
		if(i==lenb) printf("\n");
		else printf(" ");
	}
	printf("一共有%d人及格,这些分数是:",lenc);
	for(i=1;i<=lenc;i++) {
		printf("%d",c[i]);
		if(i==lenc) printf("\n");
		else printf(" ");
	}
}