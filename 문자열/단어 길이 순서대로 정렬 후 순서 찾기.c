#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	char a[1001] = { '\0', };//ũ�Ⱑ 1001�� �迭 a ���� �� null�� �ʱ�ȭ
	char* pa[100] = { '\0', };//ũ�Ⱑ 100�� ������ �迭 *pa ���� �� null�� �ʱ�ȭ
	int k;//������ ���� k ����
	gets(a);//a�� �� �Է�
	scanf("%d", &k);//k�� ���� �Է�
	int n = strlen(a);//���ڿ� a�� ���̸� ������ ���� n�� ����
	pa[0] = a;//pa[0]�� a ����
	int cnt2 = 1;//������ ���� cnt2 ���� �� 1 �� �ʱ�ȭ
	for (int i = 0; i < n; i++) {//n�� �ݺ��ϴ� �ݺ���
		if (a[i] == ' ') {//a[i]�� ������ ����
			a[i] = '\0';//a[i]�� null ����
			pa[cnt2++] = a + i + 1;//pa[cnt2++]�� a + i + 1 ����
		}
	}
	char* tmp = { '\0', };//������tmp ���� �� null�� �ʱ�ȭ

	for (int i = 0; i < cnt2; i++) {//�ܾ��� ���̰� �� �� ���� ����,cnt2�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2-1�� �ݺ��ϴ� �ݺ���
			if (strlen(pa[j]) < strlen(pa[j + 1])) {//pa[j]�� ���̰� pa[j+1]���� ���� ����
				tmp = pa[j];//tmp�� pa[j]����
				pa[j] = pa[j + 1];//pa[j]�� pa[j+1]����
				pa[j + 1] = tmp;//pa[j+1]�� tmp ����
			}
		}
	}
	for (int i = 0; i < cnt2; i++) { //���̰� ���� �ܾ�鳢�� ���������� ����, cnt2�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2-1�� �ݺ��ϴ� �ݺ���
			if (strlen(pa[j]) == strlen(pa[j + 1])) {//pa[j]�� ���̿� pa[j+1]���̰� ���� ����
				if (strcmp(pa[j], pa[j + 1]) > 0) {//���������� �����ϴ� ����
					tmp = pa[j];//tmp�� pa[j]����
					pa[j] = pa[j + 1];//pa[j]�� pa[j+1]����
					pa[j + 1] = tmp;//pa[j+1]�� tmp ����
				}
			}
		}
	}
	printf("%s ", pa[k - 1]);//pa[k-1]�� ���ڿ� ���
}