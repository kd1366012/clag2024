#include<stdio.h>
#include<string.h>
int main(void) {
	char a[100], b[100];
	printf("������1?:");
	gets(a);
	printf("������2?;");
	gets(b);
	strcat(a,b);
	printf("����:%s\n",a);
	return 0;
}