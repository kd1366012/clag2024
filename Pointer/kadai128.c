#include<stdio.h>
main() {
    int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
    int b[30] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42, 0 };
    int* pda = a, * pba = b;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *pba = *pda + *pba; // aの要素をbの要素に加算して代入
            pda++;
            pba++;
        }
        pda = a; // pdaをaの先頭に戻す
    }

    printf("配列b[]=");
    pba = b; // pbaをbの先頭に戻す
    for (int j = 0; j < 10; j++) {
        printf("%d ", *pba);
        pba++;
    }

}