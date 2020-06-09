#include <stdio.h>

int stunum[10];
char name[10][20];
int sco[10][3];
double ave[3];
double t[10];

int main() {
	int i,j;
	for(i=0;i<10;i++) {
		printf("请输入学号，姓名，三门课程成绩: ");
		scanf("%d %s %d %d %d",&stunum[i],name[i],&sco[i][0],&sco[i][1],&sco[i][2]);
		ave[0]+=sco[i][0];
		ave[1]+=sco[i][1];
		ave[2]+=sco[i][2];
		t[i]=(double)(sco[i][0]+sco[i][1]+sco[i][2])/3;
	}
	printf("第一门课程平均成绩:%lf\n",ave[0]/=10);
	printf("第二门课程平均成绩:%lf\n",ave[1]/=10);
	printf("第三门课程平均成绩:%lf\n\n",ave[2]/=10);
	for(int i=0;i<3;i++)
	for(i=0;i<3;i++) {
		int index=0,s=sco[0][i];
		for(j=0;j<10;j++) {
			if(sco[j][i]>s){
				s=sco[j][i];
				index=j;
			}
		}
		printf("第%d门课程最高分的同学信息:\n",i+1);
		printf("%d %s %d %d %d %lf(平均分)\n",stunum[index],name[index],sco[index][0],sco[index][1],sco[index][2],t[index]);
	}
}