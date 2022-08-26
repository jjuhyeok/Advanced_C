#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

struct vector {
	int h, m, s;//정수형 변수 h,m,s 선언
};
void main() {
	struct vector t1, t2;//구조체 vector t1과 t2 선언
	scanf("%d%d%d", &t1.h, &t1.m, &t1.s);//t1.h, t1.m, t1.s에 정수 입력
	scanf("%d%d%d", &t2.h, &t2.m, &t2.s);//t2.h, t2.m, t2.s에 정수 입력
	int a = t1.h * 3600 + t1.m * 60 + t1.s;//정수형 변수 a 선언 후 t1.h * 3600 + t1.m * 60 + t1.s로 초기화
	int b = t2.h * 3600 + t2.m * 60 + t2.s;//정수형 변수 a 선언 후 t2.h * 3600 + t2.m * 60 + t2.s로 초기화

	printf("%d %d %d", (b - a) / 3600, (b - a) % 3600 / 60, (b - a) % 3600 % 60);//시,분,초 출력
}