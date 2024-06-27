#include<stdio.h>
int value(int);
int main(void) {
	value(1000);
	return 0;

}

int value(int kingaku) {
	printf("%f",kingaku*1.1);
	return 0;
}