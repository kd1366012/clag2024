#include<stdio.h>
#include<string.h>
int main(void) {
	char str1[128];
	char str2[128];
	char* s1 = str1;
	char* s2 = str2;
	printf("•¶Žš—ñ1?:");
	gets(s1);
	printf("•¶Žš—ñ2?:");
	gets(s2);
	strcat(s1,s2);
	printf("str1:%s\n",*s1);
	return 0;


}