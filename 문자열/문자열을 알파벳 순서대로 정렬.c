#include <stdio.h>
#include <string.h>
#pragma warning(disable : 4996)

int main() {
	char a[101];//ũ�Ⱑ 101�� �迭 a ����
	scanf("%s", a);//a�� ���ڿ� �Է�
	int n = strlen(a);//���ڿ� a�� ���̸� ������ ���� n�� ����
	char tmp;//tmp����
	for (int i = 0; i < n; i++) {//n����ŭ �ݺ��ϴ� �ݺ���
		for (int j = i; j < n; j++) {//n����ŭ �ݺ��ϴ� �ݺ���
			if (a[j] <= a[i]) {//a[j]�� a[i]���� ���ĺ� ������ ���� ����
				tmp = a[j];//tmp�� a[j] ����
				a[j] = a[i];//a[j]�� a[i] ����
				a[i] = tmp;//a[i]�� tmp�� ����
			}//���ĺ� ������� ����
		}
	}
	printf("%s", a);//���ڿ� a ���
}