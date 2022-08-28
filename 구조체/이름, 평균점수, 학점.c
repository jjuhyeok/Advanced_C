#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

struct student {
	char name[20];//크기가 20인 문자열 name 선언
	float sc1, sc2, sc3;//실수형 sc1,sc2,sc3 선언
};
void main() {
	struct student st[20];//구조체 student st[20]선언
	float sum = 0;//실수형 변수 sum선언 후 0으로 초기화
	int N;//정수형 변수 N선언
	scanf("%d", &N);//N에 정수 입력
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		scanf("%s%f%f%f", &st[i].name, &st[i].sc1, &st[i].sc2, &st[i].sc3);//st[i].name에 문자열 입력,st[i].sc1, st[i].sc2, st[i].sc3에 실수 대입
	}
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		float sum = (st[i].sc1 + st[i].sc2 + st[i].sc3) / 3;//sum에 평균점수 대입
		if (sum >= 90)//sum이 90점 이상인 조건
			printf("%s %.1f A", st[i].name, sum);//학생 이름과 평균점수, 학점 A 출력
		else if (80 <= sum)//sum이 80점 이상인 조건
			printf("%s %.1f B", st[i].name, sum);//학생 이름과 평균점수, 학점 B 출력
		else if (70 <= sum)//sum이 70점 이상인 조건
			printf("%s %.1f C", st[i].name, sum);//학생 이름과 평균점수, 학점 C 출력
		else//sum이 70점 미만인 조건
			printf("%s %.1f F", st[i].name, sum);//학생 이름과 평균점수, 학점 F 출력
	}
}