#include<stdio.h>
int strcnt(char* p);
main() {
	char buf[256];
	int mojisu;
	printf("文字列?:");
	fgets(buf, sizeof(buf), stdin);
	mojisu = strcnt(buf);
	printf("入力された文字列の文字数は%d文字です。\n", mojisu);

}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return cnt;
}
mojisu = strcnt(buf);
printf("入力された文字列の文字数は %d 文字です。\n", mojisu);

return 0;
}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return cnt;
}