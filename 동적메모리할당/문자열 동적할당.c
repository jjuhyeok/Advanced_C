#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	getchar();//getchar
	char** p = (char**)malloc(N * sizeof(char*));//char **p�� N*char ũ���� �����Ҵ�

	for (int i = 0; i < N; i++)//N�� �ݺ��ϴ� �ݺ���
		p[i] = (char*)malloc(100 * sizeof(char));//�����Ҵ�
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		gets((p[i]));//���ڿ� �Է¹ޱ�

	}
	int m = 100;//������ ���� m ���� �� 100 ����
	int k;//������ ���� k ����
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		if (strlen(p[i]) < m) {//���ڿ��� ���̰� m���� ���� ����
			m = strlen(p[i]);//m�� ���ڿ� ���� ����
			k = i;//k�� i ����
		}
	}
	printf("%s", p[k]);//�ּұ��� ���ڿ� ���
	for (int i = 0; i < N; i++) {
		free(p[i]);//p[i] �޸� ����
	}
	free(p);//p �޸� ����
}