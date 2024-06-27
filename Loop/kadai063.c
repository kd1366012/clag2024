#include<stdio.h>
int main(void) {
	int i = 1;
	while (i<=20) {
		printf("%3d",i);
		
		if (i % 10 == 0) {
			printf("\n");
		}
		i++;

	}
	return 0;


}