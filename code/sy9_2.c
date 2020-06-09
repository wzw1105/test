#include <stdio.h>

int main() {
	printf("请输入这个矩阵:\n");
	int i,j,sum=0,v;
	for(i=0;i<3;i++) {
		for(j=0;j<3;j++) {
			scanf("%d",&v);
			if(i==j) sum+=v;
		}
	}
	printf("对角线元素之和为:%d\n",sum);
}