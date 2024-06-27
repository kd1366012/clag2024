#include<stdio.h>
main() {
	char data[10] = "Orange";
	char* p_data;
	char* p = "Apple";//先頭アドレスが200の場合、*pが200になる
	p_data = data;
	printf("data[]=");
	while (*p_data != '\0') {
		putchar(*p_data++);
	}
	printf("\n*p=");
	while(*p){
	
		putchar(*p++ != '\0');
	}
	putchar('\n');
	
}