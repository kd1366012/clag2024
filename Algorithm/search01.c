#include<stdio.h>
main() {
	int s, i, d[10] = { 10,5,30,77,16,3,47,29,37,33 };
	printf("探索値ｓを入力:");
	scanf("%d",&s);
	for (i = 0; i < 10;i++) {
		printf("i=%d\n",i);
		if (s == d[i]) {
			break;
		}
	}
	if (i == 10) {
		printf("見つからなかった\n");
	}
	else {
		printf("%d番目に見つかった\n",i);
	}


}