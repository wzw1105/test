#include <stdio.h>
char s[100005];
void print(int index){
	if(s[index]=='\0') return;
	print(index+1);
	printf("%c",s[index]);
}

int main() {
	printf("请输入一个字符串:");
	scanf("%s",s);
	printf("逆序输出结果为:");
	print(0);
	printf("\n");
}