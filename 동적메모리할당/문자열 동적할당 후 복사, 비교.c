#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	getchar();//getchar
	char temp[100] = { '\0', };//ũ�Ⱑ 100�� temp ����
	char** p = (char**)malloc(N * sizeof(char*));//**p�� N * sizeof(char*) �����Ҵ�
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%s", temp);//���ڿ� �Է�
		int l = strlen(temp);//���ڿ� ���̸� ������ ���� l�� ����
		p[i] = (char*)malloc((l + 1) * sizeof(char));//���ڿ��̱⶧���� +1�������, p[i]�� �����Ҵ�
		strcpy(p[i], temp);//p[i]�� ���ڿ� temp�� ����
	}
	char* t = { '\0', };
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		for (int j = 0; j < N - 1; j++) {//N-1�� �ݺ��ϴ� �ݺ���
			if (strcmp(p[j], p[j + 1]) > 0) {//���������� p[j+1]�� �� ���� ����
				t = *(p + j);//t�� *(p+j)����
				*(p + j) = *(p + j + 1);//*(p+j)�� *(p+j+1)����
				*(p + j + 1) = t;//*(p+j+1)�� t ����
			}//������ �������� ����
		}
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		printf("%s\n", p[i]);//���� ������� ���ڿ� ���
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		free(p[i]);//p[i]�޸� ����
	}
	free(p);//p�޸� ����
}