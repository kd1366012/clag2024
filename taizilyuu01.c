#include<stdio.h>
main() {
	float t,s, sum;
	t = 0;

	s = 0;
	sum = 0;
	printf("�̏d�����:");
	scanf("%f",&t);
	printf("�g�������:");
	scanf("%f",&s);
	sum = t / (s * s);
	if (sum <= 18.5)
	{
		printf("��̏d");
	}
	else
	{
		if (sum>=18.5 && sum<=25) 
		{
			printf("���ʑ̏d");

		}
		else
		{
			if (sum>=25 && sum>=30)
			{
				printf("�얞");

			}




		}
		


	}




}