#include<stdio.h>
#define Human 5;
struct day {
	int nen;
	int tuki;
	int hi;


};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
int main(void) {
	struct profile data[Human] = { {"A",2000,2,11,"A"},{"B",1999,12,31,"0"},{"C",1999,2,25,"AB"},{"D",2000,3,1,"A"},{"E",1999,5,10,"B"} };
	struct profile* p=data;
	int i,j,k;
	for (i = 0; i < Human;i++) {
		if ((p+i)->.date.tuki == 2) {
			printf("%s -- %d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^ - %sŒ^\n",
				(p+i)->name, (p+i)->date.nen, (p+i)->date.tuki,
				(p+i)->date.hi, (p+i)->blood);
		}
	}

	printf("%s -- %d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%cŒ^",);
}