#include <stdio.h>
#pragma warning(disable:4996)
void gcdlcm(int a, int b, int* gcd, int* lcm) {
    for (int i = 1; i <= (a < b ? a : b); i++) {//i가 1부터 1씩 증가하면서 a<b 계산이 맞을때는 a 틀릴때는 b까지 I<=a,b 반복하는 반복문
        if (a % i == 0 && b % i == 0)//a % i 가 0이거나 b % i 가 0인 조건
            *gcd = i;// *gcd에 i 값 대입
    }
    *lcm = (a * b) / *gcd;//*lcm에 (a * b) / *gcd 의 값 대입
}

void main() {
    int a, b, gcd, lcm;//변수 a,b,gcd,lcm 선언
    scanf("%d%d", &a, &b);//a,b에 정수 입력
    gcdlcm(a, b, &gcd, &lcm);//gcdlcm 함수 호출
    printf("%d %d", gcd, lcm);//gcd, lcm 출력
}