//�ϐ��̒ʗp�͈�(�X�R�[�v)�̊m�F

#include<stdio.h>
int f(int x);
int a = 1, b; //�O���ϐ�(�O���[�o���ϐ�)

int main(void) {
	int c, x, y; //�����ϐ�(���[�J���ϐ�)

	x = f(a++);
	y = f(++b);
	c = f(a + b);

	printf("a=%d b=%d c=%d x=%d y=%d\n",a,b,c,x,y);

	return 0;
}

int f(int x) {
	static int b = 2, c; //�ÓI�ϐ�(�ÓI�ȃ��[�J���ϐ�)
	int d = 2;			 //�����ϐ�(���[�J���ϐ�)

	a++;
	b++;
	c++;
	d++;

	return x + b + c + d;
}
