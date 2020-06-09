#include<stdio.h>
int sco[4][5];
int snum[4];

int main() {
	int i,j,sum1=0;
	for(i=0;i<4;i++) {
		printf("请输入第%d个学生的学号:",i+1);
		scanf("%d",&snum[i]);
		printf("请输入第%d个学生的5门课成绩:",i+1);
		for(j=0;j<5;j++) {
			scanf("%d",&sco[i][j]);
			if(j==0) sum1+=sco[i][j];
		}
	}
	printf("第一门课程平均分:%lf\n\n",(double)sum1/4);

	printf("所有有两门以上成绩不合格的同学如下所示:\n");
	for(i=0;i<4;i++) {
		int num=0,sum=0;
		for(j=0;j<5;j++) {
			sum+=sco[i][j];
			if(sco[i][j]<60) {
				num++;
			}
		}
		if(num>2) {
			printf("学号：%d ",snum[i]);
			for(j=0;j<5;j++) {
				printf("%d ",sco[i][j]);
			}
			printf("平均分: %lf\n",(double)sum/5);
		}
	}

	printf("平均成绩在90分以上或全部课程成绩在85分以上的学生的学号:");
	for(i=0;i<4;i++) {
		int above85=1,sum=0;
		for(j=0;j<5;j++) {
			if(sco[i][j]<=85) {
				above85=0;
			}
			sum+=sco[i][j];
		}
		if(above85==1 || (double)sum/5>90) {
			printf("%d ",snum[i]);
		}
	}
	printf("\n");
}