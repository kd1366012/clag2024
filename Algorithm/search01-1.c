#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int s, i, d[10];
	printf("探索値ｓを入力:");
	scanf("%dh",&s);
	for (i = 0; i < 10;i++) {
		d[i] = rand() % 100 + 1;
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