#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct vector {
	int a, b, c;//정수형 변수 a,b,c선언
};

int main() {
	struct vector v1;//구조체 vector v1 선언
	scanf("%d %d %d", &v1.a, &v1.b, &v1.c);//v1.a, v1.b, v1.c에 정수 입력
	struct vector v2;//구조체 vector v2 선언
	scanf("%d %d %d", &v2.a, &v2.b, &v2.c);//v2.a, v2.b, v2.c에 정수 입력
	struct vector v3 = { v1.a * v2.a,v1.b * v2.b,v1.c * v2.c };//구조체 vector v3 선언 후 v1.a*v2a, v1.b*v2.b, v1.c*v2.c으로 초기화
	printf("%d %d %d", v3.a, v3.b, v3.c);//v3.a,v3.b,v3.c 출력
	printf("\n%d", v3.a + v3.b + v3.c);//v3.a+v3.b+v3.c의 값 출력
}