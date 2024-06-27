#include<stdio.h>
main() {
	char data[] = { "Language" };
	char* pda;
	char a;
	int i = 1;
	pda = data;
	printf("data[]=%s\n",pda);
	printf("ŒŸõ•¶š:");
	scanf("%c",&a);
	for (; *pda != '\0'; i++) {
		if (a == *pda) {
			printf("%d",i);
		}
		pda++;
	}

}