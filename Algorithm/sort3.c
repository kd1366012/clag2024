#include<stdio.h>
#define S 5
main() {
	int d[S] = { 30,7,25,16,10 };
	int i, j, temp;
	printf("ソート前:");
	for (i = 0; i < S;i++) {
		printf("%d",d[i]);
	}
	for (i = 1; i < S;i++) {
		for (j = i - 1; j >= 0;j--) {
			if (d[j + 1]>=d[j]) {
				break;
			}
			temp = d[j];
			d[j] = d[i + 1];
			d[j + 1] = temp;
		}
	}
	printf("\nソート後:");
	for (i = 0; i < S;i++) {
		printf("%d",d[i]);
	}
}