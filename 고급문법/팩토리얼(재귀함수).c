#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

double factorial(int n) {
	if (n == 0)//n이 0인 조건
		return 1;//1 반환
	int fac = 1, i;//int fac 선언 후 1 로 초기화, i 선언
	for (i = 1; i <= n; i++) {//n번만큼 반복하는 반복문
		fac *= i;//fac에 fac*i 대입
	}
	return 1.0 / fac + factorial(n - 1);//재귀함수
}

int main() {
	int n;//정수형 변수 n 선언
	scanf("%d", &n);//정수 입력
	printf("%.6lf", factorial(n));//값 출력
	return 0;
}