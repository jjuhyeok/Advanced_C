#include <stdio.h>
#pragma warning(disable:4996)
void gcdlcm(int a, int b, int* gcd, int* lcm) {
    for (int i = 1; i <= (a < b ? a : b); i++) {//i�� 1���� 1�� �����ϸ鼭 a<b ����� �������� a Ʋ������ b���� I<=a,b �ݺ��ϴ� �ݺ���
        if (a % i == 0 && b % i == 0)//a % i �� 0�̰ų� b % i �� 0�� ����
            *gcd = i;// *gcd�� i �� ����
    }
    *lcm = (a * b) / *gcd;//*lcm�� (a * b) / *gcd �� �� ����
}

void main() {
    int a, b, gcd, lcm;//���� a,b,gcd,lcm ����
    scanf("%d%d", &a, &b);//a,b�� ���� �Է�
    gcdlcm(a, b, &gcd, &lcm);//gcdlcm �Լ� ȣ��
    printf("%d %d", gcd, lcm);//gcd, lcm ���
}