#include <stdio.h>
#pragma warning(disable : 4996)

void main() {
	char s1[50] = { '\0', };//ũ�Ⱑ 50�� ���ڿ� �迭 ���� 
	char s2[50] = { '\0', };//ũ�Ⱑ 50�� ���ڿ� �迭 ���� 
	scanf("%s%s", s1, s2);//s1�� s2�� ���ڿ� ����

	if (strcmp(s1, s2) > 0)//s1�� s2���� ���ڿ��� �� ����
		printf("%s%s", s1, s2);//s1, s2 ���
	else//s2�� s1���� ���ڿ��� �� ����
		printf("%s%s", s2, s1);//s1, s2 ���
}