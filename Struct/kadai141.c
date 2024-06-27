#include<stdio.h>
struct course {
	char name[50];
	char text[50];
	int unit;
};
int main(void) {
	struct course data = { "ゲームソフト1コース","c言語",8 };
	printf("コース名:%s\n",data.name);
	printf("\n教科名:%s\n",data.text);
	printf("\n単位数: %d\n",data.unit);
	return 0;
}