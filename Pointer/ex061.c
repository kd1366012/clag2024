#include<stdio.h>
main() {
	char data[10] = "Orange";
	char* p_data;
	char* p = "Apple";//�擪�A�h���X��200�̏ꍇ�A*p��200�ɂȂ�
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