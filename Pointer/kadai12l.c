#include<stdio.h>
#include<string.h>
int main(void) {
	char str[50];
	char* pst = str;
	printf("•¶š—ñ?:");
	gets(pst);
	printf("•¶š”‚ÍA%zu•¶š‚Å‚·",strlen(pst));
	return 0;

}