#include<stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	char* pst = str;
	printf("文字列?:");
	gets(pst);
	printf("文字数は、%zu文字です",strlen(pst));
	return 0;

}