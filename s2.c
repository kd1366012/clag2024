#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i;

	for (i = 0; i <= 100;i++) {
		printf("%4d ", rand()%300+1 );

		if (i % 10 == 0) {
			printf("\n");
		}
	}

}