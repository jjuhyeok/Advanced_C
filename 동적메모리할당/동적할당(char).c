#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int N;//������ ���� N ����
	scanf("%d", &N);//N�� ���� �Է�
	getchar();//getchar
	char* p = { '\0' };//������ ������ *p ����
	p = (char*)malloc(N * sizeof(char));//�����Ҵ��� �ؼ� ������ p�� ����
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		scanf("%c", (p + i));//p+i�ּҿ� ���� �Է�
	}
	getchar();//getchar
	char a, b;//������ ���� a,b ����
	scanf("%c %c", &a, &b);//a,b�� ���� �Է�
	int sa = 0;//������ ���� sa ���� �� 0���� �ʱ�ȭ
	int sb = 0;//������ ���� sb ���� �� 0���� �ʱ�ȭ
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		if (*(p + i) == a) {//*(p+i)�� a�� ���� ����
			sa++;//sa �� 1 ����
		}
	}
	for (int i = 0; i < N; i++) {//N�� �ݺ��ϴ� �ݺ���
		if (*(p + i) == b) {//*(p+i)�� b�� ���� ����
			sb++;//sb�� 1 ����
		}
	}
	printf("%d %d", sa, sb);//�� ���ڰ� ���ڿ��� �� �� ���ԵǾ��ִ��� ���
	free(p);//�޸� ����
}