#include <stdio.h>

int main() {
	int x;
	printf("请输入分数:");
	scanf("%d",&x);
	printf("等级为:");
	if(x>=90) {
		printf("A\n");
	}else if(x>=80) {
		printf("B\n");
	}else if(x>=70) {
		printf("C\n");
	}else if(x>=60){
		printf("D\n");
	}else {
		printf("E\n");
	}
}