#include<stdio.h>

#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char str[101];//ũ�Ⱑ 101�� ������ �迭 str����
	scanf("%s", str);//str�� ���ڿ� �Է�
	int cnt = 0;//cnt�� 0���� �ʱ�ȭ
	for (int i = 0;; i++) {//�ݺ���
		if (str[i] == '\0') {//str[i]�� �� ���� ����
			break;//Ż��
		}
		cnt = cnt + 1;//cnt�� 1�� ����
	}
	char tmp;//������ tmp ����
	for (int i = 0; i < cnt; i++) {//cnt��ŭ �ݺ��ϴ� �ݺ���
		printf("%s\n", str);//str���
		for (int j = 1; j < cnt; j++) {//j<cnt�϶����� �ݺ��ϴ� �ݺ���
			tmp = str[j - 1];//tmp�� str[j-1]����
			str[j - 1] = str[j];//str[j-1]�� str[j]����
			str[j] = tmp;//str[j-1]�� tmp����
		}

	}
}