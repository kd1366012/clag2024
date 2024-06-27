#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
int main(void) {
	struct profile n;
	struct profile* p = &n;

	printf("–¼‘O‚ð“ü—Í:");
	scanf("%s",p->name);
	printf("¶”NŒŽ“ú‚ð‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d %d %d",&p->birth[0],&p->birth[1],&p->birth[2]);
	printf("ŒŒ‰tŒ^‚ð“ü—Í:");
	scanf("%c%c",&p->blood[0],&p->blood[1]);
	printf("%s -- %d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^- %c%cŒ^",p->name,p->birth[0],p->birth[1],p->birth[2],p->blood[0],p->blood[1]);

	return 0;

}