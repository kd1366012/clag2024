#include<stdio.h>
struct fruits {
	int apple;
	int orange;
	int banana;
};




int main(void) {
	struct fruits store1 = {100,200,300};
	struct fruits store2 = { 300,500,600 };
	printf("�����S�̋��z:%d\n",store1.apple);
	printf("�I�����W�̋��z:%d\n",store1.orange);
	printf("�o�i�i�̋��z:%d\n",store1.banana);





	return 0;
}
