#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct complex {
	double a;//소수부분
	double b;//복소수부분
};
struct complex add(struct complex c1, struct complex c2) {
	double s1 = 0;//실수형 변수 s1 선언 후 0 대입
	double s2 = 0;//실수형 변수 s1 선언 후 0 대입
	s1 = c1.a + c2.a;//소수끼리 더하기
	s2 = c1.b + c2.b;//복소수끼리 더하기
	struct complex st = { s1,s2 };//구조체 st에 s1,s2값 대입
	return st;//st 반환
}
int main() {
	struct complex c0[2];//크기가 2인 구조체 c0선언
	for (int i = 0; i < 2; i++) {//2번 반복하는 반복문
		scanf("%lf %lf", &c0[i].a, &c0[i].b);//소수와 복소수 입력
	}
	add(c0[0], c0[1]);//add함수 호출
	printf("%.1lf + %.1lfi", add(c0[0], c0[1]));//소수와 복소수 출력
}