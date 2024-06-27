#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int k;
	srand(time(0));
	rand();
	k = rand() % 200 + 1;
	if (k <= 80) {
		printf("Critical Hit");
	}
	else {
		if (k<=50) {
			printf("ŠgŽUUŒ‚");

		}
		else {
			printf("’ÊíUŒ‚");
		}


	}
}

