#include<stdio.h>
void irekae(int*x, int*y);
int main() {
	int a = 10,b=30;
	printf("�֐����s�O�̒l:");
	printf("a=%d	b=%d",a,b);
	printf("\n�֐����s��̒l:");
	printf("a=%d	b=%d",a,b);

}
void irekae(int*x, int*y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}