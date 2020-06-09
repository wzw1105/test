#include<stdio.h>

int stunum[5];
int sco[5][3];
char name[5][20];

void print() {
	int i;
	for(i=0;i<5;i++) {
		printf("第%d个同学:",i+1);
		printf("%d %s %d %d %d",stunum[i],name[i],sco[i][0],sco[i][1],sco[i][2]);
	}
}

int main() {
	int i;
	for(i=0;i<5;i++) {
		printf("请输入学号，姓名，三门课程成绩: ");
		scanf("%d %s %d %d %d",&stunum[i],name[i],&sco[i][0],&sco[i][1],&sco[i][2]);

	}
	print();
}