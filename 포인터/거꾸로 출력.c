#include<stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ch[20];//ũ�Ⱑ 20�� ������ �迭�� ����
	char* pch = &ch;//*pch�� ch�� �ּҰ��� ��������
	int k = 0;//����k�� 0���� �ʱ�ȭ
	for (int i = 0; i < 20; i++) {//20�� ���ư��� �ݺ���
		scanf("%c", pch);//pch�� ���ڸ� �Է�
		if (*pch == '#') {//*pch�� ���� '#'�� ����
			break;//Ż��
		}
		k = k + 1;//k�� ���� 1�� ����
		pch = pch + 1;//pch�� ������ 1�� ����
	}
	k = k - 1;//k�� ���� 1 ��
	pch = pch - 1;//pch�� ���� 1�� ��
	for (pch; k >= 0; k--, pch--) {//k����ŭ ���ư��� �ݺ���
		printf("%c", *pch);//*pch�� ���
	}
	return 0;
}