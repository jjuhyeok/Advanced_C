#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	getchar();//getchar
	char* p = (char*)malloc(N * sizeof(char));//*p �� N * sizeof(char)ũ�� �����Ҵ�
	for (int i = 0; i < N; i++) {//N���ݺ��ϴ� �ݺ���
		scanf("%c", (p + i));//p+i�� ���� �Է�
	}
	int c = 0;//������ ���� c ���� �� 0����
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		if (*(p + i) == 'c') {//*(p + i)�� 'c'�� ����
			if (*(p + i + 1) == 'a') {//*(p + i+1)�� 'a'�� ����
				if (*(p + i + 2) == 't') {//*(p + i+2)�� 't'�� ����
					c++;//c�� 1 ����
				}
			}
		}
	}
	printf("%d", c);//c ���
	free(p);//p�޸� ����

}