#include<stdio.h>
main() {
	char str[256];
	for (; gets(str) != NULL;) {
		puts(str); //()の中の文字列をそのまま出力して改行文字(\n)を末尾に
					//	追加する
	}
}