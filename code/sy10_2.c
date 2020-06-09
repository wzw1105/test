#include<stdio.h>
int sco[10][5];
double ave[10];

void calStuAve() {
	int i,j;
	for(i=0;i<10;i++) {
		int sum=0;
		for(j=0;j<5;j++) {
			sum+=sco[i][j];
		}
		ave[i]=(double)sum/5;
		printf("第%d个同学的平均分为:%lf\n",i+1,ave[i]);
	}
	printf("\n");
}

void calCouAve() {
	int i,j;
	for(i=0;i<5;i++) {
		int sum=0;
		for(j=0;j<10;j++) {
			sum+=sco[j][i];
		}
		printf("第%d门课的平均分为:%lf\n",i+1,(double)sum/10);
	}
}

void findMax() {
	int i,j,x,y,max=0;
	for(i=0;i<10;i++) {
		for(j=0;j<5;j++) {
			if(sco[i][j]>max) {
				max=sco[i][j];
				x=i;
				y=j;
			}
		}
	}
	printf("第%d个同学的第%d门课为最高分数\n",x+1,y+1);

}

void calVar() {
	int i;
	double sumave2=0,sumave=0;
	for(i=0;i<10;i++) {
		sumave+=ave[i];
		sumave2+=ave[i]*ave[i];
	}
	printf("平均分方差为:%lf\n",sumave2/10-(sumave/10)*(sumave/10));
}

int main() {
	int i,j;
	for(i=0;i<10;i++) {
		printf("请输入第%d个学生的5门课成绩:",i+1);
		for(j=0;j<5;j++) {
			scanf("%d",&sco[i][j]);
		}
	}
	calStuAve();
	calCouAve();
	findMax();
	calVar();
}