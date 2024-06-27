#include<stdio.h>
int main(void) {
    int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
    int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
    int c[10];

    // 配列の要素を入れ替える
    for (int i = 0; i < 10; i++) {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }

    // 入れ替えた後の配列を表示
    printf("配列aと配列bを入れ替えると\n");
    printf("配列a = ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("配列b = ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}