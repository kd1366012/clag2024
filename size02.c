#include<stdio.h>
#include<string.h>
int main(void) {
	char str1[] = "\0";
	char str2[] = "orange";
	char str3[] = "Water\\\0meron";

	printf("\n%d",strlen(str1));
	printf("\n%d",strlen(str2));
	printf("\n%d", strlen(str3));
	printf("\n%d",sizeof (str1));
	printf("\n%d", sizeof(str2));
	printf("\n%d", sizeof(str3));
	return 0;



}