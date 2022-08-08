#include <stdio.h>
#pragma warning(disable : 4996)

void strcopy(char a[6], char b[6]) {
    for (int i = 0; i < 6; i++) {//6번 반복하는 반복문
        b[i] = a[i];//복사
    }
}
void main() {
    char c[6], d[6];//크기가 6인 문자형 배열 c,d선언
    char* pc = &c;//*pc와 c 연결
    char* pd = &d;//*pd와 d 연결
    for (int i = 0; i < 6; i++) {//6번 반복하는 반복문
        scanf(" %c", pc + i);//pc+i에 문자 입력
    }
    strcopy(pc, pd);//strcopy함수 호출
    for (int i = 0; i < 6; i++) {//6번 반복하는 반복문
        printf("%c", *(pd + i));//*(pd + i) 출력
    }
}