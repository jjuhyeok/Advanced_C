#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

void pswap(int* ppx, int* ppy) {
	int tmp;//���� tmp ����
	tmp = *ppx;//tmp�� *ppx ����
	*ppx = *ppy;//*ppx�� *ppy ����
	*ppy = tmp;//*ppy�� tmp ����
	//�ٲٱ�
}

int main() {
	int x, y;//������ ���� x,y ����
	scanf("%d %d", &x, &y);//x,y�� ���� �Է�
	int* px = &x;//������ ������ px ���� �� x�� ����
	int* py = &y;//������ ������ py ���� �� y�� ����
	pswap(px, py);//pswap�Լ� ȣ��
	printf("%d %d", *px, *py);//*px,*py�� ���
}