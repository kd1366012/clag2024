#include<stdio.h>
main() {
	char c;
	char* cp = &c;
	printf("1文字入力:");
	scanf("%c",&c);
	printf("次の文字は%c",c+1);
}