#include <stdio.h>
#include <string.h>

int main() {
	int big=0,small=0,num=0,tab=0;
	for(int i=0;i<3;i++) {
		char c=getchar();
		while(c!='\n') {
			if(c>='a'&&c<='z') {
				small++;
			}else if(c>='A'&&c<='Z') {
				big++;
			}else if(c>='0'&&c<='9') {
				num++;
			}else if(c==' '){
				tab++;
			}
			c=getchar();
		}
	}
	printf("一共有个%d大写字母，%d个小写字母，%d个数字，%d个空格\n",big,small,num,tab);

}