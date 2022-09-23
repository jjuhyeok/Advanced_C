#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int add(int x, int y) {
	return x + y;//x+y값 반환
}
int sub(int x, int y) {
	return x - y;//x-y값 반환
}
int multiply(int x, int y) {
	return x * y;//x*y값 반환
}

int main() {
	int x, y;//정수형 변수 x,y 선언
	int (*handle[3]) (int, int) = { add, sub, multiply };//배열의 크기가 3인 함수 포인터 배열 handle 선언 후 함수 이름으로 초기화
	scanf("%d %d", &x, &y);//x,y에 정수 입력
	printf("%d %d %d", handle[0](x, y), handle[1](x, y), handle[2](x, y));//합, 차, 곱 출력
	return 0;
}