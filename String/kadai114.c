#include<stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	printf("�������?:");
	scanf("%s",str);
	printf("������:%s",str);
	printf("\t������ = %zu",strlen(str));
	return 0;
}