#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n = 5;//������ ���� n ���� �� 5 ����
	int* p = (int*)malloc(n * sizeof(int));//������ p ���� �� 5* sizeof(int) �����Ҵ�
	int* q = (int*)malloc(n * sizeof(int));//������ q ���� �� 5* sizeof(int) �����Ҵ�
	for (int i = 0; i < n + 1; i++) {//n+1����ŭ �ݺ��ϴ� �ݺ���
		if (i >= 20) {//i�� 20�̻��� ����
			break;//break
		}
		if (i >= n) {//i�� n �̻��� ����
			n = n + 3;//n�� 3 ����
			q = (int*)malloc(n * sizeof(int));//q�� n*sizeof(int) �����Ҵ�
			for (int k = 0; k < i; k++) {//i��ŭ �ݺ��ϴ� �ݺ���
				q[k] = p[k];//p[k]�� q[k]�� ����
			}
			free(p);//����
			p = q;//p�� q�� ����

		}
		scanf("%d", &p[i]);//p[i]�� ���� �Է�

		if (p[i] == -1) {//p[i]�� -1�� ����
			break;//break
		}
	}
	for (int i = 0; ; i++) {//�ݺ���
		printf(" %d", p[i]);//p[i]�� ���
		if (p[i] == -1) {//p[i]�� -1�� ����
			break;//break
		}
	}
	free(p);//p �޸� ����
}