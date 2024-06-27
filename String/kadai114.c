#include<stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	printf("•¶š—ñ‚Í?:");
	scanf("%s",str);
	printf("•¶š—ñ:%s",str);
	printf("\t•¶š” = %zu",strlen(str));
	return 0;
}