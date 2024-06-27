#include<stdio.h>
int strcnt(char* p);
main() {
	char buf[256];
	int mojisu;
	printf("•¶š—ñ?:");
	fgets(buf, sizeof(buf), stdin);
	mojisu = strcnt(buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í%d•¶š‚Å‚·B\n", mojisu);

}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return cnt;
}
mojisu = strcnt(buf);
printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Ì•¶š”‚Í %d •¶š‚Å‚·B\n", mojisu);

return 0;
}

int strcnt(char* p) {
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);
	return cnt;
}