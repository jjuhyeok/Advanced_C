#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct result {
	int h;//���� ���� ����
	int l;//���� ���� ����
	char r;//���� ��� ����
	int m;//�հ� ���� ������
	int n;//h-l�� ����
};
struct result passorfail(struct result* e) {
	if ((*e).h - (*e).l <= (*e).m) {//���� ���� ������ ���� ���� ������ ���̰� �հ� ���� ������ ����������
		(*e).r = 'P';//�н�
		(*e).n = (*e).h - (*e).l;//���� ���� ������ ���� ���� ������ ���� ����
	}
	else {
		(*e).r = 'F';//����
		(*e).n = (*e).h - (*e).l;//���� ���� ������ ���� ���� ������ ���� ����
	}
}
int main() {
	struct result r1, * p = &r1;//����ü r1 ���� �� ������*p�� r1 ����
	scanf("%d %d %d", &r1.h, &r1.l, &r1.m);//�������� �������� �հݱ��� ������ �Է�
	passorfail(p);//passorfail�Լ� ȣ��
	printf("%d %c", (*p).n, (*p).r);//�л��� �������� ������� ���
}