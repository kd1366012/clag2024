#include<stdio.h>
#include<string.h>
int main(void) {
	char a[100], b[100];
	printf("文字列1?:");
	gets(a);
	printf("文字列2?;");
	gets(b);
	strcat(a,b);
	printf("結合:%s\n",a);
	return 0;
}