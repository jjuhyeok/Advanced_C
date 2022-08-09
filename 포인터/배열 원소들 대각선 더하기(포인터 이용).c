#include <stdio.h>
#pragma warning(disable: 4996)
void addArray(int* a, int* b, int* c, int n) {

    int* end = a + n;//포인터 end 선언 후 a + n과 연결

    for (a, b = b + n - 1, c; a < end; a++, b--, c++)//a < end까지 반복하는 반복문

        *c = *a + *b;//*c에 *a + *b 대입

}
void main() {
    int a[20] = { 0 }, b[20] = { 0 }, c[20] = { 0 };//크기가 20인 배열a, 크기가 20인 배열 b 크기가 20인 배열 c 선언 후 0으로 초기화
    int n, * pa = a, * pb = b, * pc = c;//변수 n선언, * pa = a, * pb = b, * pc = c 선언

    scanf("%d", &n);//n에 값 입력

    for (pa = a; pa < a + n; pa++)//n의 값 만큼 반복하고 pa++ 하는 반복문
        scanf("%d", pa);//pa에 값 입력

    for (pb = b; pb < b + n; pb++)//n의 값 만큼 반복하고 pb++ 하는 반복문 
        scanf("%d", pb);//pb에 값 입력


    addArray(a, b, c, n);//addarray함수 호출

    for (pc = c; pc < c + n; pc++)//n의 값 만큼 반복하고 pc++ 하는 반복문
        printf(" %d", *pc);//*pc 출력

}