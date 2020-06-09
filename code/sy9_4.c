#include <stdio.h>

double staver(int a[][3],int n) {
	double res=0;
	int i,j;
	for(i=0;i<n;i++) {
		for(j=1;j<3;j++) {
			res+=a[i][j];
		}
	}
	return res/(3*n);
}

int main() {
	int a[][3]={{85,76,83},{77,80,82},{92,88,85},{98,79,89}};
	double res=staver(a,4);
	printf("所有同学的所有课程的平均成绩为:%.2lf\n",res);
}