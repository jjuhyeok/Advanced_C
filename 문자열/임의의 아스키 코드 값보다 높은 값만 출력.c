#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int st;//정수형 st선언
    char str[10];//문자형 배열 str 선언
    scanf("%d", &st);//st에 정수 입력
    for (int i = 10, j = 0; ; i = i * 10, j++) {//반복문
        str[j] = ((st % i) / (i / 10) + 48);//아스키 코드를 이용해 ((st % i) / (i / 10)+48)을 str[j]에 대입
        if (i > st * 10) {//i가 st*10보다 큰 조건
            str[j] = '\0';//str[j]에 널 값 입력
            break;//탈출
        }
    }
    printf("%s", str);//str출력
}