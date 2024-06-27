#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};


int main(void) {
	struct profile pro;
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s",pro.name);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d %d %d", &pro.birth[0], &pro.birth[1],&pro.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s",pro.blood);
	printf("%s -- %d”N%dŒ%d“ú¶ ŒŒ‰tŒ^ - %sŒ^",pro.name,pro.birth[0],pro.birth[1],pro.birth[2],pro.blood);

	return 0;


}