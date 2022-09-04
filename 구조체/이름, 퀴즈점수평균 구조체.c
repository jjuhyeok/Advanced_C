#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct score {
	char name[10];//최대 길이가 9인 이름
	double a, b, c;//3회 퀴즈 점수
	double avg;//평균 점수
};
read_data(struct score sc[10]) {
	for (int i = 0; i < 10; i++) {//10번 반복하는 반복문
		scanf("%s %lf %lf %lf", &sc[i].name, &sc[i].a, &sc[i].b, &sc[i].c);//이름, 퀴즈 점수 입력
	}
}
cal_avg(struct score sc[10]) {
	double sum = 0;//실수형 변수 sum 선언 후 0 대입
	for (int i = 0; i < 10; i++) {//10번 반복하는 반복문
		sum = (sc[i].a + sc[i].b + sc[i].c) / 3;//sum에 평균점수 대입
		sc[i].avg = sum;//구조체 avg에 평균값 입력
	}
}
sort(struct score sc[10]) {
	int cnt = 0;//정수형 변수 cnt 선언 후 0으로 초기화
	struct score tmp = { "",0,0,0,0 };//빈 구조체 tmp 선언
	struct score cpy[10] = { "",0,0,0,0 };//빈 구조체 cpy 선언
	for (int i = 0; i < 10; i++) {//10번 반복하는 반복문
		for (int j = 0; j < 10; j++) {//10번 반복하는 반복문
			if (sc[i].avg < sc[j].avg) {//평균값이 sc[i].avg 보다 sc[j].avg가 큰 조건
				cnt++;//cnt 1 증가
			}
		}
		cpy[cnt] = sc[i];//cpy[cnt] 에sc[i] 대입
		cnt = 0;//cnt에 0 대입
	}
	for (int i = 0; i < 10; i++) {//10번 반복하는 반복문
		sc[i] = cpy[i];//배열 0~9번 복사해주기
	}
}
print_score(struct score sc[10]) {
	printf("%s %.2lf\n", sc[0].name, sc[0].avg);//최고점 학생의 이름과 평균점수 출력
	printf("%s %.2lf\n", sc[9].name, sc[9].avg);//최하점 학생의 이름과 평균점수 출력
	printf("%s %.2lf\n", sc[7].name, sc[7].avg);//8번째 학생의 이름과 평균점수 출력
	printf("%s %.2lf\n", sc[8].name, sc[8].avg);//9번째 학생의 이름과 평균점수 출력
	printf("%s %.2lf", sc[9].name, sc[9].avg);//10번째(최하점) 학생의 이름과 평균점수 출력

}int main() {
	struct score a[10];//크기가 10인 구조체 배열 a 선언
	read_data(a);//read_data함수 호출
	cal_avg(a);//cal_avg함수 호출
	sort(a);//sort 함수 호출
	print_score(a);//print_score 함수 호출
}
