#include<stdio.h>
#include<string.h>
int main(void) {
	char a[100], b[100];
	printf("•¶š—ñ1?:");
	gets(a);
	printf("•¶š—ñ2?;");
	gets(b);
	strcat(a,b);
	printf("Œ‹‡:%s\n",a);
	return 0;
}