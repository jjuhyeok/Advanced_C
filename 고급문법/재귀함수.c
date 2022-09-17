#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int A(int a, int b) {
	if (a != b) {//a와 b가 다른 조건
		if (a > b) {//a가 b보다 큰 조건
			A(b, a - b);//A함수 호출
		}
		else {//a가 b 이하인 조건
			A(a, b - a);//A함수 호출
		}
	}
	else {//a와 b가 같은 조건
		return a;//a 반환
	}
}

int main() {
	int a, b;//두 수 a,b 선언
	scanf("%d %d", &a, &b);//a,b에 정스 입력
	int c = A(a, b);//정수형 변수 c 선언 후 A함수 값 대입
	printf("%d", c);//c의 값 출력
}