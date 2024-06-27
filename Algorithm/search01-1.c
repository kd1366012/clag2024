#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int s, i, d[10];
	printf("’Tõ’l‚“‚ğ“ü—Í:");
	scanf("%dh",&s);
	for (i = 0; i < 10;i++) {
		d[i] = rand() % 100 + 1;
		printf("i=%d\n",i);
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else {
		printf("%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½\n",i);
	}


}