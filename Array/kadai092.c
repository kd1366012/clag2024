#include<stdio.h>
main() {
	int  a[10], c[10], i;
	for (i = 0; i < 10;i++) {
		a[i] = (i + 1) * 10;
	}
	for (i = 0; i < 10;i++) {
		c[i] = a[i] * 2;
	}
	printf("配列Ａから配列ｃにコピー\n配列Ａ=");
	for (i = 0; i < 10;i++) {
		printf("%d ",a[i]);

	}
	printf("\n配列c=");
	for (i = 0; i <= 10;i++) {
		printf("%d ",c[i]);

	}
}