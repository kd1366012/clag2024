#include<stdio.h>
main() {
	int num, i, sum;
	i = 0;
	sum = 0;
	num = 0;
	printf("����");
	scanf("%d",&num);



	for (; num != -999; i++) {
		sum += num;
		printf("����");
		scanf("%d",&num);
	}
	printf("���v=%d \t	����=%.2f\n",sum, (float)sum/i);


}