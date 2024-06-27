#include<stdio.h>
main() {
	int a, b, c, let;
	printf("3つの整数を入力");
	let = scanf("%d%d%d", &a, &b, &c); //letが3になる
	printf("let=%d a=%d b=%d c=%d\n", let, a, b, c);
	
	printf("整数を入力　(ctrlで終了)");
	for (; scanf("%d", &a) != EOF;) {
		printf("a=%d\n",a);
		printf("整数を入力　(ctrlで終了)");







	}
}