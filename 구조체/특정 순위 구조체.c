#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct number {
	int n;//3��° ����
	int r;//7��° ����
};
int main() {
	struct number num[10];//ũ�Ⱑ 10�� ����ü �迭 num ����
	for (int i = 0; i < 10; i++) {//10�� �ݺ��ϴ� �ݺ���
		scanf("%d", &num[i].n);//����ün�� ���� �Է�
	}
	int rr = 1;//���� ���ϱ�
	int cnt = 0;
	for (int i = 0; i < 10; i++) {//10�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < 10; j++) {//10�� �ݺ��ϴ� �ݺ���
			if (num[i].n < num[j].n) {//num[j].n �� num[i].n���� ���� ū ����
				cnt++;//cnt�� 1 ����
			}//�ڱ⺸�� ū ���� ���ִ� �ݺ���
		}
		rr = rr + cnt;//���� ���ϱ�
		num[i].r = rr;//����ü�� ���� �Է��ϱ�
		cnt = 0;//cnt 0 ����
		rr = 1;//rr 0 ����
	}
	int re = 0;//������ ���� re ���� �� 0 ����
	for (int i = 0; i < 10; i++) {//10�� �ݺ��ϴ� �ݺ���
		if (re == 0 && num[i].r == 3) {//re�� 0�̸鼭 3��° ������ ����
			printf("%d ", num[i].n);//3��° ���� ���
			re = 1;//re�� 1 ����
			i = 0;//i�� 0 ����
		}
		if (re == 1 && num[i].r == 7) {//re�� 1�̸鼭 7��° ������ ����
			printf("%d ", num[i].n);//7��° ���� ���
		}
	}
}