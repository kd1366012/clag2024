#include<stdio.h>
#define S 5
main() {
	int d[S] = { 30,7,25,16,10 };
	int i, j, temp;
	printf("ソート前:");
	for (i = 0; i < S;i++) {
		printf("%d ",d[i]);
	}

	for (i = S - 1; i > 0; i--) {
		for (j = 0; j < 1;j++) {
			if (d[i]>d[i+1]) {
				temp = d[j];
				d[j] = d[i + 1];
				d[j + 1] = temp;
			}
		}
	}
	printf("\nソート後:");
	for (i = 0; i < S;i++) {
		printf("%d ",d[i]);
	}
}