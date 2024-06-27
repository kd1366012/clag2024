#include<stdio.h>
int main(void) {
	int i;
	for (i = 0;;i+=1) {
		if(i > 20){
			break;


		}
		if (i % 2 == 0) {
			continue;
		}
		printf("%3d",i);
	}
}