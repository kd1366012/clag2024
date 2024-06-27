#include<stdio.h>
int main(void) {
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i;
	for (i = 0; i < 7; i++) {
			printf("%.3s\n", day[i]);
	}
	return 0;

}
