#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)


int main() {
	int r, c;//������ ���� r,c����
	scanf("%d%d", &r, &c);//r,c�� ���� �Է�

	char** p = (char**)malloc(c * sizeof(char*));//c * sizeof(char*)ũ�� �����Ҵ�


	for (int i = 0; i < c; i++) {//�ݺ���
		p[i] = (char*)malloc(r * sizeof(char));//r * sizeof(char) ũ�� �����Ҵ�
	}

	char k, a = 'a';// k, a�� 'a' ����

	for (int i = 0; i < c; i++) {//c���ݺ��ϴ� �ݺ���
		for (int j = 0; j < r; j++) {//r���ݺ��ϴ� �ݺ���
			k = a++;//k�� a���� �� a�� 1����
			p[i][j] = k;//p[i][j]�� k ����
			if (k == 'z') {//k�� z��  ����
				a = 'A';//a�� A ����
			}
			if (k == 'Z') {//k�� Z�� ����
				a = 'a';//a�� a ����
			}
		}
	}
	for (int i = 0; i < c; i++) {//c���ݺ��ϴ� �ݺ���
		for (int j = 0; j < r; j++) {//r���ݺ��ϴ� �ݺ���
			printf("%c ", p[i][j]);//p[i][j] ���
		}printf("\n");//�ٹٲ�
	}
	free(p);//p�޸� ����
}