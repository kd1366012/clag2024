#include<stdio.h>
#define CNT 5
main() {
	int d[CNT] = { 30,7,25,16,10 };
	int i, j,temp;
	printf("ソート前;");
	for (i = 0; i < 5;i++) {
		printf("%d",d[CNT]);
	}
	printf("\n");
	for (i = 0; i < CNT - 1;i++) {
		for (j = i + 1; j < CNT;j++) {
			if (d[i]>d[j]) {
				temp = d[i];
				d[i] = d[j];
				d[j] = temp;
			}
		}
	}
	printf("ソート後\n");
	for (i = 0; i < CNT;i++) {
		printf("%d",d[i]);
	}
}