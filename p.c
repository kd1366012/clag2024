#include<stdio.h>
int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr; // ポインタ p は配列 arr の先頭要素を指します

	*p += 3; // arr[0] + 3 = 1 + 3 = 4
	printf("%d\n", *p); // 出力は 4

	p += 3; // ポインタ p を3つ進めます
	printf("%d\n", *p); // 出力は 4
	return 0;

}