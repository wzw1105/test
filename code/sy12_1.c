#include <stdio.h>

typedef struct{
	int stunum;
	char name[10];
	double sco;
}stu;
stu a[10];

int main() {
	printf("请输入学生数量:");
	int n;
	scanf("%d",&n);
	double sum=0;
	for(int i=0;i<n;i++) {
		printf("请输入学号,姓名,课程成绩:");
		scanf("%d %s %lf",&a[i].stunum,a[i].name,&a[i].sco);
		sum+=a[i].sco;
	}
	printf("平均分为:%lf\n",sum/n);
}