#include<stdio.h>
main() {
	char str[256];
	for (; gets(str) != NULL;) {
		puts(str); //()�̒��̕���������̂܂܏o�͂��ĉ��s����(\n)�𖖔���
					//	�ǉ�����
	}
}