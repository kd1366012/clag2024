#include<stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	char* pst = str;
	printf("������?:");
	gets(pst);
	printf("�������́A%zu�����ł�",strlen(pst));
	return 0;

}