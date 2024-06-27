#include<stdio.h>
int main(void) {
	int a, b;
	char op;
	printf("®”1:");
	scanf("%d",&a);
	printf("®”2:");
	scanf("%d",&b);
	printf("‰‰Zq‚ğ“ü—Í");
	getchar();
	scanf("%c",&op);
	switch (op) {
	case '+':
		printf("%d %c %d = %d",a,op,b,a+b,a+b);
		break;

	case '-':
		printf("%d %c %d = %d",a,op,b,a-b,a-b);
		break;

	case '*':
		printf("%d %c %d = %d",a,op,b,a*b,a*b);
		break;

	case '/':
		printf("%d %c %d = %d",a,op,b,a/b,a/b);
		break;
	case'%':
		printf("%d %c %d = %d",a,op,b,a%b,a%b);
		break;
	}

	return 0;










}