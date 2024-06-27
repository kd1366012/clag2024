#include <stdio.h>
#include <string.h>
main()
{
	char str1[] = "\0";
	char str2[] = "Orange";
	char str3[] = "Water\\\0melon";

	printf("\n%d", strlen(str1)); // ・・・(34)
	printf("\n%d", strlen(str2)); // ・・・(35)
	printf("\n%d", strlen(str3)); // ・・・(36)
	printf("\n%d", sizeof str1); // ・・・(37)
	printf("\n%d", sizeof str2); // ・・・(38)
	printf("\n%d", sizeof str3); // ・・・(39)
}