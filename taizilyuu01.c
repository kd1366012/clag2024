#include<stdio.h>
main() {
	float t,s, sum;
	t = 0;

	s = 0;
	sum = 0;
	printf("体重を入力:");
	scanf("%f",&t);
	printf("身長を入力:");
	scanf("%f",&s);
	sum = t / (s * s);
	if (sum <= 18.5)
	{
		printf("低体重");
	}
	else
	{
		if (sum>=18.5 && sum<=25) 
		{
			printf("普通体重");

		}
		else
		{
			if (sum>=25 && sum>=30)
			{
				printf("肥満");

			}




		}
		


	}




}