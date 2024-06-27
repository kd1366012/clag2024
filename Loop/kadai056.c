#include<stdio.h>
main() {
	char m,i;
	printf("アルファベット小文字？");
	scanf("%c", &m);
	for (i = m; i <= 'z';i++) {
		printf("%c ",i + 1);


	}

}