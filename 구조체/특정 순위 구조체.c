#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct number {
	int n;//3번째 순위
	int r;//7번째 순위
};
int main() {
	struct number num[10];//크기가 10인 구조체 배열 num 선언
	for (int i = 0; i < 10; i++) {//10번 반복하는 반복문
		scanf("%d", &num[i].n);//구조체n에 정수 입력
	}
	int rr = 1;//순서 정하기
	int cnt = 0;
	for (int i = 0; i < 10; i++) {//10번 반복하는 반복문
		for (int j = 0; j < 10; j++) {//10번 반복하는 반복문
			if (num[i].n < num[j].n) {//num[j].n 가 num[i].n보다 값이 큰 조건
				cnt++;//cnt값 1 증가
			}//자기보다 큰 값을 세주는 반복문
		}
		rr = rr + cnt;//순위 구하기
		num[i].r = rr;//구조체에 순위 입력하기
		cnt = 0;//cnt 0 대입
		rr = 1;//rr 0 대입
	}
	int re = 0;//정수형 변수 re 선언 후 0 대입
	for (int i = 0; i < 10; i++) {//10번 반복하는 반복문
		if (re == 0 && num[i].r == 3) {//re가 0이면서 3번째 순위인 조건
			printf("%d ", num[i].n);//3번째 순위 출력
			re = 1;//re에 1 대입
			i = 0;//i에 0 대입
		}
		if (re == 1 && num[i].r == 7) {//re가 1이면서 7번째 순위인 조건
			printf("%d ", num[i].n);//7번째 순위 출력
		}
	}
}