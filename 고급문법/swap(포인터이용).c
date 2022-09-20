#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

void pswap(int* ppx, int* ppy) {
	int tmp;//정수 tmp 선언
	tmp = *ppx;//tmp에 *ppx 대입
	*ppx = *ppy;//*ppx에 *ppy 대입
	*ppy = tmp;//*ppy에 tmp 대입
	//바꾸기
}

int main() {
	int x, y;//정수형 변수 x,y 선언
	scanf("%d %d", &x, &y);//x,y에 정수 입력
	int* px = &x;//정수형 포인터 px 선언 후 x와 연결
	int* py = &y;//정수형 포인터 py 선언 후 y와 연결
	pswap(px, py);//pswap함수 호출
	printf("%d %d", *px, *py);//*px,*py값 출력
}