#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i,u,ans;
	printf("”“–‚ÄƒQ[ƒ€I");
	srand(time(0));
	u = rand() % 100 + 1;

	while (1) {
		printf("”(1`100)‚ð“ü—Í:");
		scanf("%d",&u);
		i++;
		if (ans>u) {
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n",u);
		}
		else if (ans<u) {
			printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n");
		}
		else {
			printf("“–‚½‚è! %d‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n",i);
			break;
		}
	}
}