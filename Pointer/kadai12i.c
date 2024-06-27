#include<stdio.h>
#include<string.h>
int main(void) {
	char str1[50] = "mikan";
	char str2[50];
	char* pst1 = str1;
	char* pst2 = str2;
	strcpy(pst2,pst1);
	printf("ƒRƒs[æ‚Ì•¶š—ñ = %s",pst2);
	return 0;
}