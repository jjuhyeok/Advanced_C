#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int N;//���� N ����
    scanf("%d", &N);//N�� ���� ����
    char* A[9] = { "one","two","three","four","five","six","seven","eight","nine" };//������ �迭 *A����
    char* B[3] = { "THO","HUN","TEN" };//������ �迭 *B ����

    int a = 0;//���� a ���� �� 0 ����
    int ca = 0;//���� ca ���� �� 0 ����



    for (int i = 10000, j = 0; i >= 10; i = i / 10, j++) {//�ݺ���
        a = ((N % i) / (i / 10));//�� �ڸ� ���� ���ϱ�
        if (ca == 0 && a >= 1) {//ca == 0 �̸鼭 a>=1�� ����
            printf("%s %s ", A[a - 1], B[0]);//A[a-1],B[0] ���
        }
        else if (ca == 1 && a >= 1) {//ca == 1 �̸鼭 a>=1�� ����
            printf("%s %s ", A[a - 1], B[1]);//A[a-1],B[1] ���
        }
        else if (ca == 2 && a >= 1) {//ca == 2 �̸鼭 a>=1�� ����
            printf("%s %s ", A[a - 1], B[2]);//A[a-1],B[2] ���
        }
        else if (ca == 3 && a >= 1) {//ca == 3 �̸鼭 a>=1�� ����
            printf("%s ", A[a - 1]);//A[a-1],B[3] ���
        }

        ca = ca + 1;//ca 1�� ����
    }
}