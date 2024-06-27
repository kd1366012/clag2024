#include<stdio.h>
main() {
	int bim, t,s;
	printf("g’·‚ğ“ü—Í\n");
	scanf("%d",&s);
	printf("‘Ìd‚ğ“ü—Í\n");
	scanf("%d",&t);
	bim = t / s * s;
	if (bim<=18) {
		printf("’á‘Ìd");
	}
	else if (bim<=25) {
		printf("•’Ê‘Ìd");
	}
	else if (bim<=30) {
		printf("”ì–‚P");
	}
	else if (bim<=35) {
		printf("”ì–‚Q");
	}
	else if (bim<=40) {
		printf("”ì–‚R");
	}
	else {
		printf("”ì–‚S");
	}
}