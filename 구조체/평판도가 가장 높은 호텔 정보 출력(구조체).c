#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct hotel_info {
	char name[31];//호텔이름
	int G;//등급
	double k;//평판
	double D;//거리
	char b;//조식포함여부
};
int in_hotel_info(struct hotel_info* p) {
	int cnt = 0;//호텔수 세는 변수
	for (int i = 0; i < 100; i++) {//100번 반복하는 반복문
		scanf("%s", &(p + i)->name);//호텔 이름 입력
		getchar();//getchar
		if ((*(p + i)).name[0] == '0') {//호텔이름이 0인 조건
			break;//break
		}
		scanf("%d %lf %lf %c", &(p + i)->G, &(p + i)->k, &(p + i)->D, &(p + i)->b);//등급, 평판, 거리, 조식포함여부 입력
		cnt++;//호텔수 1 증가
	}
	return cnt;//cnt 반환 
}
void out_hotel_info(struct hotel_info* p, int N, int G, double D) {
	double h = 0;//평판
	int n = 0;//몇번째
	char s[31] = { '\0', };//이름
	for (int i = 0; i < N; i++) {//N번 반복하는 반복문
		if ((*(p + i)).G >= G && (*(p + i)).D <= D && h <= (*(p + i)).k) {
			if (h == (*(p + i)).k) {//평판이 같은 조건
				if (strcmp((*(p + i)).name, s) < 0) {//(*(p + i)).name이 s보다 빠른 조건
					strcpy(s, ((*(p + i)).name));//s에 ((*(p + i)).name) 복사
					n = i;//n에 i 대입
					h = ((*(p + i)).k);//h에 평판 대입
				}
			}
			else {//평판이 다른 조건
				h = ((*(p + i)).k);//h에 평판 대입
				n = i;//n에 i 대입
				strcpy(s, ((*(p + i)).name));//s에 ((*(p + i)).name)복사
			}
		}
	}
	printf("%s %d %.1lf %.1lf %c", (*(p + n)).name, (*(p + n)).G, (*(p + n)).k, (*(p + n)).D, (*(p + n)).b);//호텔이름, 등급, 평판, 거리, 조식여부 출력
}
int main() {
	struct hotel_info ht[100], * p = ht;//크기가 100인 구조체 배열 ht 선언 후 포인터 *p와 ht 연결
	int n = in_hotel_info(p);//in_hotel_info호출 후 정수형 변수 n에 대입
	int G;//정수형 변수 G 선언(등급)
	double D;//실수형 변수 D 선언(거리)
	scanf("%d %lf", &G, &D);//등급과 거리 입력
	out_hotel_info(p, n, G, D);//out_hotel_info 호출
}