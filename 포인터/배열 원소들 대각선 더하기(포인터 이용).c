#include <stdio.h>
#pragma warning(disable: 4996)
void addArray(int* a, int* b, int* c, int n) {

    int* end = a + n;//������ end ���� �� a + n�� ����

    for (a, b = b + n - 1, c; a < end; a++, b--, c++)//a < end���� �ݺ��ϴ� �ݺ���

        *c = *a + *b;//*c�� *a + *b ����

}
void main() {
    int a[20] = { 0 }, b[20] = { 0 }, c[20] = { 0 };//ũ�Ⱑ 20�� �迭a, ũ�Ⱑ 20�� �迭 b ũ�Ⱑ 20�� �迭 c ���� �� 0���� �ʱ�ȭ
    int n, * pa = a, * pb = b, * pc = c;//���� n����, * pa = a, * pb = b, * pc = c ����

    scanf("%d", &n);//n�� �� �Է�

    for (pa = a; pa < a + n; pa++)//n�� �� ��ŭ �ݺ��ϰ� pa++ �ϴ� �ݺ���
        scanf("%d", pa);//pa�� �� �Է�

    for (pb = b; pb < b + n; pb++)//n�� �� ��ŭ �ݺ��ϰ� pb++ �ϴ� �ݺ��� 
        scanf("%d", pb);//pb�� �� �Է�


    addArray(a, b, c, n);//addarray�Լ� ȣ��

    for (pc = c; pc < c + n; pc++)//n�� �� ��ŭ �ݺ��ϰ� pc++ �ϴ� �ݺ���
        printf(" %d", *pc);//*pc ���

}