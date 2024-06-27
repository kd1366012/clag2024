#include<stdio.h>
int asutarisuku(int);
main() {
	int a;
	printf("®”:");
	scanf("%d",&a);
	asutarisuku(a);
}
int asutarisuku(int p) {
	int i = 0;
	while (i < p) {
		printf("*");
		i++;
	}
	return p;
	
}