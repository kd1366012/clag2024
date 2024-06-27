#include <stdio.h>

int main(void) {
    char* str1 = "Hello";
    char* str2 = "World!";

    char str3[30];

    sprintf(str3, "%s %s\n", str1, str2);
    printf("%s", str3);

    return 0;
}