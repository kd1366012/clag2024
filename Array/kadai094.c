#include<stdio.h>
int main(void) {
    int a[10] = { 10,20,30,40,50,60,70,80,90,100 };
    int b[10] = { 100,200,300,400,500,600,700,800,900,1000 };
    int c[10];

    // �z��̗v�f�����ւ���
    for (int i = 0; i < 10; i++) {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }

    // ����ւ�����̔z���\��
    printf("�z��a�Ɣz��b�����ւ����\n");
    printf("�z��a = ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("�z��b = ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}