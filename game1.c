#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i,u,ans;
	printf("数当てゲーム！");
	srand(time(0));
	u = rand() % 100 + 1;

	while (1) {
		printf("数(1〜100)を入力:");
		scanf("%d",&u);
		i++;
		if (ans>u) {
			printf("%dより大きいです\n",u);
		}
		else if (ans<u) {
			printf("%dより小さいです\n");
		}
		else {
			printf("当たり! %d回で当てました\n",i);
			break;
		}
	}
}