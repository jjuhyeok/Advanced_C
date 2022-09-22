#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void add(int x, int y) {
	printf("%d", x + y);//x+y값 출력
}

int main() {
	int A;//정수형 변수 A 선언
	scanf("%d", &A);//A에 정수 입력
	void* pa = &A;//void포인터 *pa선언 후 A와 연결
	printf("%d\n", *(int*)pa);//int형 포인터로 형변환 후 역참조연산자로 출력
	void(*fp)();//함수포인터 fp선언
	fp = add;//fp와 함수 add 연결
	int x, y;//정수형 변수 x,y선언
	scanf("%d %d", &x, &y);//x,y에 정수 입력
	fp(x, y);//함수 호출
}