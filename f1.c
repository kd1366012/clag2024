#include<stdio.h>
main() {
	int num, i, sum;
	i = 0;
	sum = 0;
	num = 0;
	printf("数は");
	scanf("%d",&num);



	for (; num != -999; i++) {
		sum += num;
		printf("数は");
		scanf("%d",&num);
	}
	printf("合計=%d \t	平均=%.2f\n",sum, (float)sum/i);


}