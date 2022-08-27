#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

struct student {
	char name[10];//크기가 10인 문자열name 선언
	float score;//실수형 변수 score 선언
};
void main() {
	struct student st[5];//구조체 student st[5] 선언

	float sum = 0;//실수형 변수 sum 선언 후 0으로 초기화
	for (int i = 0; i < 5; i++) {//5번 돌아가는 반복문
		scanf("%s %f", st[i].name, &st[i].score);//st[i].name에 문자열 입력, st[i].score에 실수 입력

	}
	for (int i = 0; i < 5; i++) {//5번 돌아가는 반복문
		sum += st[i].score;//sum에 st[i].score 더해주기
	}
	for (int i = 0; i < 5; i++) {//5번 돌아가는 반복문
		if (st[i].score <= sum / 5) {//평균 이하의 점수인 조건
			printf("%s\n", st[i].name);//이름 출력
		}
	}
}