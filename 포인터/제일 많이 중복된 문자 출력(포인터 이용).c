#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ch[10];//ũ�Ⱑ 10�� �迭 ����
	char* p;//*p����
	int c = 0;//���� c���� �� 0���� �ʱ�ȭ
	int t = 0;//���� t���� �� 0���� �ʱ�ȭ
	int tt = 0;//���� tt���� �� 0���� �ʱ�ȭ
	int cccc = -1;//���� cccc���� �� -1�� �ʱ�ȭ
	for (p = ch; p < ch + 10; p++) {//10�� ���ư��� �ݺ���
		scanf("%c", p);//p�� 10�� �Է�
	}
	for (p = ch; p < ch + 10; p++) {//10�� ���ư��� �ݺ���
		cccc = cccc + 1;//cccc�� 1�� ����
		for (int k = 0; k < 10; k++) {//10�� ���ư��� �ݺ���
			if (*p == *(p + k))//���� ����
				c = c + 1;//c�� 1�� ����
		}
		if (t < c) {//t���� c�� Ŭ ����
			tt = cccc;//tt�� cccc����
			t = c;//t�� c����
		}
		c = 0;//c�� 0���� �ʱ�ȭ
	}
	p = ch;//������p�� �迭ch�� ����
	printf("%c %d", *(p + tt), t);//���
	return 0;
}