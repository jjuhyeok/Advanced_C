#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

int main() {
	int n;//������ ���� n ����
	scanf("%d", &n);//n�� ���� �Է�
	char s1[101][99];//ũ�Ⱑ 101,99�� ���ڿ� �迭 s1����
	getchar();//getchar
	for (int i = 0; i < n; i++) {//n��ŭ �ݺ��ϴ� �ݺ���
		gets(s1[i]);////s1[i]�� ���ڿ� �Է�
	}
	int m = 9999;//������ ���� m ���� �� 9999����
	char s2[101] = { '\0', };//ũ�Ⱑ 101�ι����� ���� s2 ����
	for (int i = 0; i < n; i++) {//n�� �ݺ��ϴ� �ݺ���
		if (m > strlen(s1[i])) {//m�� ���ڿ� s1�� ���̺��� �� ����
			strcpy(s2, s1[i]);//s2�� s1 ����
			m = strlen(s1[i]);//m�� s1�� ���� ����

		}
	}
	printf("%s", s2);//s2 ���
}