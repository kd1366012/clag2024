#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main() {
	int i,u,ans;
	printf("�����ăQ�[���I");
	srand(time(0));
	u = rand() % 100 + 1;

	while (1) {
		printf("��(1�`100)�����:");
		scanf("%d",&u);
		i++;
		if (ans>u) {
			printf("%d���傫���ł�\n",u);
		}
		else if (ans<u) {
			printf("%d��菬�����ł�\n");
		}
		else {
			printf("������! %d��œ��Ă܂���\n",i);
			break;
		}
	}
}