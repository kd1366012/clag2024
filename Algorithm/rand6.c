#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int player, con;
	printf("何を出しますか？");
	printf("1:グー 2:チョキ 3:パー ");
	scanf("%d",&player);
	srand(time(0));
	con = rand() % 2;
	if (player == 1) {
		printf("プレイヤーはグーです");
	}
	else if (player == 2) {
		printf("プレイヤーはチョキです");
	}
	else if(player == 3) {
		printf("プレイヤーはパーです");
	}

	printf("\n");

	if (con == 0) {
		printf("コンピュータはグーです");
	}
	else if (con == 1) {
		printf("コンピュータはチョキです");
	}
	else if (con == 2) {
		printf("コンピュータはパーです");
	}

	printf("\n");
	
	if (player == 1 && con == 0) {
		printf("あいこ");
	}
	else if (player == 1 && con == 1) {
		printf("プレイヤーの勝ちです");
	}
	else if (player == 1 && con == 2) {
		printf("コンピュータの勝ち");
	}
	else if (player == 2 && con == 1) {
		printf("コンピュータの勝ちです");
	}
	else if (player == 2 && con == 0) {
		printf("あいこ");
	}
	else if (player == 2 && con == 2) {
		printf("コンピュータの勝ち	");
	}
	else if (player == 3 && con == 0) {
		printf("プレイヤーの勝ち");
	}
	else if (player == 3 && con == 1) {
		printf("コンピュータの勝ち");
	}
	else if (player == 3 && con == 2) {
		printf("あいこ");
	}




}