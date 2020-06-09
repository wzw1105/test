#include <stdio.h>

int main() {
	printf("请输入一个大写字符: ");
	char c=getchar();
	printf("转换成小写: %c\n",(c+32));
}