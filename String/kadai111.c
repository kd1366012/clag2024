#include<stdio.h>
int main(void) {
	int i = 0;
	char str[] = "abcde";
	for (; str[i] != '\0'; i++) {
		printf("%c",str[i]);

	}
}