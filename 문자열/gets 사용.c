#include <stdio.h>
#include <string.h>
#pragma warning(disable: 4996)

void main() {
	char str1[101] = { '\0', };//ũ�Ⱑ 101�� ���ڿ� str1 ����
	char str2[101] = { '\0', };//ũ�Ⱑ 101�� ���ڿ� str2 ����
	gets(str1);//str1�� �Է�
	scanf("%s", str2);//str2�� �Է�

	int cnt1 = strlen(str1);//cnt1�� str1�� ���� ����
	int cnt2 = strlen(str2);//cnt2�� str2�� ���� ����
	int cnt3 = 0, r = 0;//cnt3�� 0, r�� 0 ����
	for (int i = 0; i < cnt1; i++) {//cnt1�� �ݺ��ϴ� �ݺ���
		int k = i;//k�� i ����
		cnt3 = 0;//cnt3�� 0 ����
		for (int j = 0; j < cnt2; j++) {//cnt2�� �ݺ��ϴ� �ݺ���

			if (*(str1 + i) == *(str2 + j)) {//*(str1 + i) == *(str2 + j)�� ���� ����
				cnt3++;//cnt3 1�� ����
				if (cnt2 == cnt3) {//cnt2�� cnt3�� ���� ����
					r++;//r 1�� ����
					break;//Ż��
				}
				i++;//i 1�� ����
			}
			else {//*(str1 + i) == *(str2 + j)�� �ٸ� ����
				cnt3 = 0;//cnt3�� 0 ����
				j = 0;//j�� 0 ����
				i = k;//j�� k ����
				break;//Ż��
			}
		}

	}
	printf("%d", r);//r�� ���

}