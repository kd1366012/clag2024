#include<stdio.h>
main() {
	int num, i, sum;
	i = 0;
	sum = 0;
	num = 0;
	printf("”‚Í");
	scanf("%d",&num);



	for (; num != -999; i++) {
		sum += num;
		printf("”‚Í");
		scanf("%d",&num);
	}
	printf("‡Œv=%d \t	•½‹Ï=%.2f\n",sum, (float)sum/i);


}