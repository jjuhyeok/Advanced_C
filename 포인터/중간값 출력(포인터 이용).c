#include <stdio.h>
#pragma warning(disable : 4996)

void main() {
    int x[3];//크기가 3인 배열x 선언
    int* p;//포인터p 선언
    for (p = x; p < x + 3; p++) {//3번 반복하는 반복문
        scanf("%d", p);//p에 입력
    }
    for (int i = 0; i < 2; i++) {//2번 반복하는 반복문
        for (p = x; p < x + 2; p++) {//2번 반복하는 반복문
            if (*p > *(p + 1)) {//두 수 비교하는 조건문
                int tmp = *(p + 1);//숫자 바꾸기
                *(p + 1) = *p;//숫자 바꾸기
                *p = tmp;//숫자 바꾸기
            }
        }
    }
    p = x;//포인터p와 배열x 연결
    printf("%d", *(p + 1));//중간값 출력
}