#include<stdio.h>
void irekae(int*x, int*y);
int main() {
	int a = 10,b=30;
	printf("関数実行前の値:");
	printf("a=%d	b=%d",a,b);
	printf("\n関数実行後の値:");
	printf("a=%d	b=%d",a,b);

}
void irekae(int*x, int*y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
	return;
}