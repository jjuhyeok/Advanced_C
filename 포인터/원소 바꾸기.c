#include <stdio.h>
#pragma warning(disable : 4996)

void swap(int* s1, int* s2) {
	int tmp = *s1;//tmp�� *s1����
	*s1 = *s2;//*s1�� *s2����
	*s2 = tmp;//*s2�� tmp����
}

int main() {
	int N;//���� N����
	int ar[50];//ũ�� 50�� �迭 ar����
	scanf("%d", &N);//N�� ���� �Է�
	for (int i = 0; i < N; i++) {//N��ŭ �ݺ��ϴ� �ݺ���
		scanf("%d", &ar[i]);//�迭ar[i]�� ���� �Է�
	}
	int a, b;//a,b����
	scanf("%d %d", &a, &b);//a,b�� ���� �Է�

	swap(&ar[a], &ar[b]);//swap�Լ� ȣ��

	for (int i = 0; i < N; i++) {//N��ŭ �ݺ��ϴ� �ݺ���
		printf(" %d", ar[i]);//���
	}
}