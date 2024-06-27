#include<stdio.h>
void g(char *pstr1,char *pstr2);
main() {
	char str1[100],str2[100];
	printf("•¶š—ñ?:");
	gets(str1);
	printf("str1:%s\n",str1);
	printf("str2:%s\n",str2);
	strcnt(str1,str2);
}

void g(char *pstr1, char *pstr2) {
	int cnt;
	for (cnt = 0; *pstr1 != '\0'; pstr1++);
	pstr1--;
	cnt--;

	while(cnt >= 0) {
		*pstr2 = *pstr1;
		pstr1--;
		pstr2++;
		cnt--;

	}
	*pstr2 = '\0';










	return;

}