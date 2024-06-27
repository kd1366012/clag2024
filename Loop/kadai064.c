#include<stdio.h>
int main(void) {
	int i = 20;
	while (i>=0) {
		printf("%3d",i);
		
		if (i % 10 == 0) {
			printf("\n");
		}
		i--;

	}
	return 0;


}