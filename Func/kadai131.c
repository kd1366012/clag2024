#include <stdio.h>
main() {
    char ch;

    printf("文字入力:");

    while (scanf("%c", &ch) != EOF) {
        putchar(ch);
        printf("文字入力:");

        
    }

}