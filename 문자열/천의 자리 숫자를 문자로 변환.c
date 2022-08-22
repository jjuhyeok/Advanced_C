#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int N;//정수 N 선언
    scanf("%d", &N);//N에 정수 대입
    char* A[9] = { "one","two","three","four","five","six","seven","eight","nine" };//문자형 배열 *A선언
    char* B[3] = { "THO","HUN","TEN" };//문자형 배열 *B 선언

    int a = 0;//정수 a 선언 후 0 대입
    int ca = 0;//정수 ca 선언 후 0 대입



    for (int i = 10000, j = 0; i >= 10; i = i / 10, j++) {//반복문
        a = ((N % i) / (i / 10));//각 자리 숫자 구하기
        if (ca == 0 && a >= 1) {//ca == 0 이면서 a>=1인 조건
            printf("%s %s ", A[a - 1], B[0]);//A[a-1],B[0] 출력
        }
        else if (ca == 1 && a >= 1) {//ca == 1 이면서 a>=1인 조건
            printf("%s %s ", A[a - 1], B[1]);//A[a-1],B[1] 출력
        }
        else if (ca == 2 && a >= 1) {//ca == 2 이면서 a>=1인 조건
            printf("%s %s ", A[a - 1], B[2]);//A[a-1],B[2] 출력
        }
        else if (ca == 3 && a >= 1) {//ca == 3 이면서 a>=1인 조건
            printf("%s ", A[a - 1]);//A[a-1],B[3] 출력
        }

        ca = ca + 1;//ca 1씩 증가
    }
}