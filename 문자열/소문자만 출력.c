#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char str[20];//ũ�Ⱑ20�� ������ �迭str����
	scanf("%s", str);//���ڿ��� str�� �Է�
	for (int i = 0; str[i] != 0; i++) {//str[i]�� null���� �ɶ����� ���ư��� �ݺ���
		if (str[i] >= 'a' && str[i] <= 'z') {//str[i]�� �ҹ����� ����
			printf("%c", str[i]);//str[i] ���
		}
	}
}