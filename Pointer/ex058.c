#include<stdio.h>
main() {
	int a[3], * p;
	p = a;
	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p...%d\n",*p);
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+1...%d\n", *p+1);
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*(p+1)...%d\n", *(p+1));
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p+=1...%d\n", *p+=1); //先に取り出してから1増える
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*p++...%d\n",*p++); //p++（後置きは処理が後で実行される。）この場合は、*pを出力してp++
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("(*p)++...%d\n", (*p)++);
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("*++p...%d\n", *++p);//++p(前置き)
	p = a;

	a[0] = 10, a[1] = 20, a[2] = 30;
	printf("++*p...%d\n", ++*p);
	


}