#include<stdio.h>
main() {
    int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
    int b[30] = { 4, 8, 12, 16, 20, 24, 28, 32, 38, 42, 0 };
    int* pda = a, * pba = b;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *pba = *pda + *pba; // a‚Ì—v‘f‚ðb‚Ì—v‘f‚É‰ÁŽZ‚µ‚Ä‘ã“ü
            pda++;
            pba++;
        }
        pda = a; // pda‚ða‚Ìæ“ª‚É–ß‚·
    }

    printf("”z—ñb[]=");
    pba = b; // pba‚ðb‚Ìæ“ª‚É–ß‚·
    for (int j = 0; j < 10; j++) {
        printf("%d ", *pba);
        pba++;
    }

}