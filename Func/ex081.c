#include<stdio.h>
int saidai(int *p,int);
int saisyo(int *s,int);
main() {
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("Å‘å’l=%d",saidai(data,8));
	printf("\nÅ¬’l=%d",saisyo(data,8));
}
int saidai(int *p,int num){
	int i = 0;
	int dai = *p;
	p++;
	for (i = 0; i < num-1;i++) {
		if (dai<*p) {
			dai = *p;
		}
		p++;
		i++;
	}

	return dai;
}

int saisyo(int *s,int num) {
	int i = 0;
	int sai = *s;
	s++;
	for (i = 0; i < num-1; i++) {
		if (sai>*s) {
			sai = *s;
		}
		s++;
		i++;
	}

	return sai;
}

