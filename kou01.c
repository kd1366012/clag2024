#include<stdio.h>
struct fruits {
	int apple;
	int orange;
	int banana;
};




int main(void) {
	struct fruits store1 = {100,200,300};
	struct fruits store2 = { 300,500,600 };
	printf("リンゴの金額:%d\n",store1.apple);
	printf("オレンジの金額:%d\n",store1.orange);
	printf("バナナの金額:%d\n",store1.banana);





	return 0;
}
