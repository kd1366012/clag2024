#include<stdio.h>
int main(void) {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr; // �|�C���^ p �͔z�� arr �̐擪�v�f���w���܂�

	*p += 3; // arr[0] + 3 = 1 + 3 = 4
	printf("%d\n", *p); // �o�͂� 4

	p += 3; // �|�C���^ p ��3�i�߂܂�
	printf("%d\n", *p); // �o�͂� 4
	return 0;

}