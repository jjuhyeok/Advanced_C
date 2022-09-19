#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<math.h>
#pragma warning(disable:4996)

int A(int n) {
	if (n == 0) {//n이 0 인 조건
		return 0;//0 반환
	}
	else if (n == 1) {//n이 1 인 조건
		return 1;//1 반환
	}
	else {//n이 0,1이 아닌 조건
		return A(n - 1) + A(n - 2);//피보나치
	}
}

int main() {
	int n;//정수형 변수 n 선언
	scanf("%d", &n); //n에 정수 입력
	int s;//정수형 변수 s 선언
	s = A(n); //s에 함수 A값 대입
	printf("%d", s); //s 출력
	return 0;
}
