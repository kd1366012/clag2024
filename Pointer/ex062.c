#include<stdio.h>
main() {
	char data1[10] = "banana";
	char data2[10];
	char* p_data1,*p_data2;
	char* p = "peach";
	p_data1 = data1;
	p_data2 = data2;
	while (*p_data2++ == *p_data1++);
	p_data1 = data1;
	while (*p_data1++ = *p++);
	printf("data1[]=%s\n", data1);
	printf("data2[]=%s\n",data2);

}