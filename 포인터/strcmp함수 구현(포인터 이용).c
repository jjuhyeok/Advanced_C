#include <stdio.h>
#pragma warning(disable : 4996)

void strcopy(char a[6], char b[6]) {
    for (int i = 0; i < 6; i++) {//6�� �ݺ��ϴ� �ݺ���
        b[i] = a[i];//����
    }
}
void main() {
    char c[6], d[6];//ũ�Ⱑ 6�� ������ �迭 c,d����
    char* pc = &c;//*pc�� c ����
    char* pd = &d;//*pd�� d ����
    for (int i = 0; i < 6; i++) {//6�� �ݺ��ϴ� �ݺ���
        scanf(" %c", pc + i);//pc+i�� ���� �Է�
    }
    strcopy(pc, pd);//strcopy�Լ� ȣ��
    for (int i = 0; i < 6; i++) {//6�� �ݺ��ϴ� �ݺ���
        printf("%c", *(pd + i));//*(pd + i) ���
    }
}