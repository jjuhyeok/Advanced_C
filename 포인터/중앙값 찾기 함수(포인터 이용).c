#include <stdio.h>
#pragma warning(disable : 4996)

int mid(int ar[3]) {//�߾Ӱ� ������ �Լ�
	int q = 0;//���� q�� 0���� �ʱ�ȭ
	int tmp = 0;//���� tmp�� 0���� �ʱ�ȭ
	for (int i = 0; i < 3; i++) {//3�� �ݺ��ϴ� �ݺ���
		for (int k = i; k < 3; k++) {//3�� �ݺ��ϴ� �ݺ���
			if (ar[i] < ar[k]) {//�������� ����
				tmp = ar[i];//tmp�� ar[i]����
				ar[i] = ar[k];//ar[i]�� ar[k] ����
				ar[k] = tmp;//ar[k]�� tmp ����
			}
		}
	}
	q = ar[1];//q�� �߾Ӱ� ����
	return q;
}

int main() {
	int x[3];//ũ�Ⱑ 3�� �迭 ����
	int* p = x;//������ p�� �迭x ����
	for (int i = 0; i < 3; i++) {//3�� �ݺ��ϴ� �ݺ���
		scanf("%d", (p + i));//p+i�� ���� �Է�
	}
	mid(p);//mid �Լ� ȣ��
	printf("%d", mid(p));//���
}