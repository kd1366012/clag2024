#include<stdio.h>
main() {
	int i,j;
	i = 0;
	j = 0;
	for (i = 1; i <= 9;i++) {
		for (j = 1; j <= 9; j++) {
			printf("%02d ",i * j);



		}
		printf("\n");

	}



}