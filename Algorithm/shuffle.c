#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i = 0, data[20],target=0,work=0;
	for (i = 0; i < 20;i++) {
		data[i] = i + 1;
		

	}
	srand(time(0));
	for (int i = 0; i < 20;i++) {
		rand();
		target = rand() % 20;
		work = data[i];
		data[i] = data[target];
		data[target] = work;
		printf("data[%d]=%d\n", i, data[i]);
	}
