#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct result {
	int h;//가장 높은 점수
	int l;//가장 낮은 점수
	char r;//시험 통과 여부
	int m;//합격 기준 점수차
	int n;//h-l의 차이
};
struct result passorfail(struct result* e) {
	if ((*e).h - (*e).l <= (*e).m) {//가장 높은 점수와 가장 낮은 점수의 차이가 합격 기준 점수차 이하인조건
		(*e).r = 'P';//패스
		(*e).n = (*e).h - (*e).l;//가장 높은 점수와 가장 낮은 점수의 차이 대입
	}
	else {
		(*e).r = 'F';//페일
		(*e).n = (*e).h - (*e).l;//가장 높은 점수와 가장 낮은 점수의 차이 대입
	}
}
int main() {
	struct result r1, * p = &r1;//구조체 r1 선언 후 포인터*p와 r1 연결
	scanf("%d %d %d", &r1.h, &r1.l, &r1.m);//높은점수 낮은점수 합격기준 점수차 입력
	passorfail(p);//passorfail함수 호출
	printf("%d %c", (*p).n, (*p).r);//학생의 점수차와 통과여부 출력
}