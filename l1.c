#include <stdio.h>
#include <string.h>
main()
{
	char str1[] = "\0";
	char str2[] = "Orange";
	char str3[] = "Water\\\0melon";

	printf("\n%d", strlen(str1)); // �E�E�E(34)
	printf("\n%d", strlen(str2)); // �E�E�E(35)
	printf("\n%d", strlen(str3)); // �E�E�E(36)
	printf("\n%d", sizeof str1); // �E�E�E(37)
	printf("\n%d", sizeof str2); // �E�E�E(38)
	printf("\n%d", sizeof str3); // �E�E�E(39)
}