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
	char tmp[100];//ũ�Ⱑ 100�� ���ڿ�tmp ����
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < N - 1; j++) {//N-1�� �ݺ��ϴ� �ݺ���
			if (strlen(p[j]) < strlen(p[j + 1])) {//p[j] ���ڿ��� p[j+1]���ڿ����� ���̰� ���� ����
				strcpy(tmp, p[j]);//���ڿ� ����
				strcpy(p[j], p[j + 1]);//���ڿ� ����
				strcpy(p[j + 1], tmp);//���ڿ� ����
			}
		}
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		printf("%s\n", p[i]);//���ڿ� ���
	}
	for (int i = 0; i < N; i++) {
		free(p[i]);//p[i] �޸� ����
	}
	free(p);//p�޸� ����
}