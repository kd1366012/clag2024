#include<stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	printf("文字列は?:");
	scanf("%s",str);
	printf("文字列:%s",str);
	printf("\t文字数 = %zu",strlen(str));
	return 0;
}