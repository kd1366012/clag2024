#include<stdio.h>
main() {
	int c;
	char dumy[256];
	c = getchar();
	for (; c != EOF;) {
		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar();
	}
}