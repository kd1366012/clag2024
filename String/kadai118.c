#include<stdio.h>
int main(void) {
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 9;j++) {
			putchar(day[i][j]);
		}
	}
	return 0;
}
