#include<stdio.h>
int main(void) {
	char day[7][10] = { "sunday","monday","tuesday","wednesday","thursday","friday","saturday" };
	int i;
	for (i = 0; i < 7; i++) {
		if (day[i][0] == 's' || day[i][0] == 'S') {
			printf("%s\n", day[i]);
		}
	}
	return 0;

}
