#include <stdio.h>
#pragma warning(disable : 4996)

void main() {
    int x[3];//ũ�Ⱑ 3�� �迭x ����
    int* p;//������p ����
    for (p = x; p < x + 3; p++) {//3�� �ݺ��ϴ� �ݺ���
        scanf("%d", p);//p�� �Է�
    }
    for (int i = 0; i < 2; i++) {//2�� �ݺ��ϴ� �ݺ���
        for (p = x; p < x + 2; p++) {//2�� �ݺ��ϴ� �ݺ���
            if (*p > *(p + 1)) {//�� �� ���ϴ� ���ǹ�
                int tmp = *(p + 1);//���� �ٲٱ�
                *(p + 1) = *p;//���� �ٲٱ�
                *p = tmp;//���� �ٲٱ�
            }
        }
    }
    p = x;//������p�� �迭x ����
    printf("%d", *(p + 1));//�߰��� ���
}