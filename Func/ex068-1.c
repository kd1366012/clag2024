#include<stdio.h>
main() {
	int a, b, c, let;
	printf("3�̐��������");
	let = scanf("%d%d%d", &a, &b, &c); //let��3�ɂȂ�
	printf("let=%d a=%d b=%d c=%d\n", let, a, b, c);
	
	printf("��������́@(ctrl�ŏI��)");
	for (; scanf("%d", &a) != EOF;) {
		printf("a=%d\n",a);
		printf("��������́@(ctrl�ŏI��)");







	}
}