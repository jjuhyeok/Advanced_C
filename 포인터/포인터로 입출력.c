#pragma warning(disable:4996)
#include<stdio.h>

int main() {

	int x, y, z; //������ �Է¹��� ���� x,y,z ����
	int* px, * py, * pz, * tmp; // ������ px,py,tmp ����
	px = &x;//x�� �ּҰ��� px�� ����
	py = &y;//y�� �ּҰ��� py�� ����
	pz = &z;//z�� �ּҰ��� pz�� ����

	scanf("%d %d %d", px, py, pz);//������ �Է�

	tmp = pz;//pz�� ���� tmp�� ����
	pz = py;//py�� ���� pz�� ����
	py = px;//px�� ���� py�� ����
	px = tmp;//tmp�� ���� px�� ����
	printf("%d %d %d", *px, *py, *pz);//*px,*py,*pz�� ���
	return 0;

}