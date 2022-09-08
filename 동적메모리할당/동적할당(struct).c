#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

struct student {
	char name[8];//크기가 8인 문자열 선언
	int k, e, m;//정수형 변수 k,e,m 선언
	float avg;//실수형 avg 선언
};
void main() {
	int N;//정수형 변수 N 선언
	scanf("%d", &N);//N에 정수 대입
	struct student* p = (struct student*)malloc(N * sizeof(struct student));//구조체에 N * sizeof(struct student) 크기 동적할당

	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%s", &p[i].name);//p[i].name에 이름 입력
		scanf("%d%d%d", &p[i].k, &p[i].e, &p[i].m);//국어 영어 수학 점수 입력
	}

	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		printf("%s ", (p + i)->name);//이름 출력
		p[i].avg = (float)(p[i].k + p[i].e + p[i].m);//과목 3개 합을 구해서 p[i].avg에 대입
		p[i].avg /= 3;//p[i].avg를 3으로 나누기
		printf("%.1f ", p[i].avg);//평균 출력
		if (p[i].k >= 90 || p[i].e >= 90 || p[i].m >= 90) {//GREAT인 조건
			printf("GREAT ");//GREAT 출력
		}
		if (p[i].k < 70 || p[i].e < 70 || p[i].m < 70) {//BAD인 조건
			printf("BAD");//BAD 출력
		}
		printf("\n");//줄바꿈
	}
	free(p);//p메모리 해제

}