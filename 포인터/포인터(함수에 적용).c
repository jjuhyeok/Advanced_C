#include <stdio.h>
#pragma warning(disable : 4996)

void input(int* i1, int* i2, int* i3) {//input�Լ� 
	scanf("%d %d %d", i1, i2, i3);//i1,i2,i3�� ���� ����
}

void output(int* o1, int* o2, int* o3) {//output�Լ�
	printf("%d %d %d", *o1, *o2, *o3);//*o1,*o2,*o3 ���
}

void main() {
	int x, y, z;//���� x,y,z����
	input(&x, &y, &z);//input �Լ� ȣ��
	output(&x, &y, &z);//output �Լ� ȣ��

}