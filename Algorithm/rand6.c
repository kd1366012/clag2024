#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int player, con;
	printf("�����o���܂����H");
	printf("1:�O�[ 2:�`���L 3:�p�[ ");
	scanf("%d",&player);
	srand(time(0));
	con = rand() % 2;
	if (player == 1) {
		printf("�v���C���[�̓O�[�ł�");
	}
	else if (player == 2) {
		printf("�v���C���[�̓`���L�ł�");
	}
	else if(player == 3) {
		printf("�v���C���[�̓p�[�ł�");
	}

	printf("\n");

	if (con == 0) {
		printf("�R���s���[�^�̓O�[�ł�");
	}
	else if (con == 1) {
		printf("�R���s���[�^�̓`���L�ł�");
	}
	else if (con == 2) {
		printf("�R���s���[�^�̓p�[�ł�");
	}

	printf("\n");
	
	if (player == 1 && con == 0) {
		printf("������");
	}
	else if (player == 1 && con == 1) {
		printf("�v���C���[�̏����ł�");
	}
	else if (player == 1 && con == 2) {
		printf("�R���s���[�^�̏���");
	}
	else if (player == 2 && con == 1) {
		printf("�R���s���[�^�̏����ł�");
	}
	else if (player == 2 && con == 0) {
		printf("������");
	}
	else if (player == 2 && con == 2) {
		printf("�R���s���[�^�̏���	");
	}
	else if (player == 3 && con == 0) {
		printf("�v���C���[�̏���");
	}
	else if (player == 3 && con == 1) {
		printf("�R���s���[�^�̏���");
	}
	else if (player == 3 && con == 2) {
		printf("������");
	}




}