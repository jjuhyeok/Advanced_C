#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char str1[101];//ũ�Ⱑ 101�� ������ str1 ����
	char str2[101];//ũ�Ⱑ 101�� ������ str2 ����
	scanf("%s", str1);//str1�� ���ڿ� �Է�
	scanf("%s", str2);//str2�� ���ڿ� �Է�
	int cnt = 0;//������ cnt ���� �� 0 ����
	for (int i = 0;; i++) {//�ݺ���
		if (str1[i] == '\0') {//str[i]�� �� ���� ����
			break;//Ż��
		}
		cnt = cnt + 1;//cnt 1�� ����
	}
	int cnt2 = 0;//������ cnt ���� �� 0 ����
	for (int i = 0; i < cnt; i++) {//cnt��ŭ �ݺ��ϴ� �ݺ���
		if (str1[i] == str2[i]) {//str[i]�� str[2]�� ���� ����
			cnt2 = cnt2 + 1;//cnt2 1�� ����
		}
	}
	printf("%d ", cnt);//cnt�� ���
	if (cnt == cnt2) {//cnt�� cnt2�� ���� ����
		printf("1");//1���
	}
	else//�ٸ� ����
		printf("0");//2���
}