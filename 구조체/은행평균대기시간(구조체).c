#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct _bank {
	int id; // 아이디, T1, T2, T3 대신, 1, 2, 3, ... 으로 한다. 
	int arrival_time; // 도착시간
	int service_time; // 서비스시간
	int waiting_time; // 대기시간
};
void waitingtime(struct _bank guest[], int N) {
	N = N - 1;//N값 1 감소
	guest[0].waiting_time = 0;//첫번째 기다리는 시간 0 대입
	for (int i = 0; i < N; i++) {//고객수만큼 반복하는 반복문
		guest[i + 1].waiting_time = guest[i].waiting_time + guest[i].arrival_time + guest[i].service_time - guest[i + 1].arrival_time;//그 다음 사람이 기다리는 시간 구해서 대입해주기
	}
}
double avgtime(struct _bank guest[], int N) {
	double sum = 0;//실수형 변수 sum 선언 후 0으로 초기화
	for (int i = 0; i < N; i++) {//고객수만큼 반복하는 반복문
		sum = sum + guest[i].waiting_time;//sum에 기다리는 시간 더해주기
	}
	sum = (sum / N);//기다리는 시간을 고객수 만큼 나눠주기
	return sum;//sum 값 반환
}
int main() {
	struct _bank bk[100];//크기가 100인 구조체 배열 bk 선언
	int N;//고객수
	scanf("%d", &N);//고객수 입력
	for (int i = 0; i < N; i++) {//고객수만큼 반복하는 반복문
		scanf("%d %d %d", &bk[i].id, &bk[i].arrival_time, &bk[i].service_time);//대기자, 도착시간, 서비스시간 입력
	}

	waitingtime(bk, N);//waitingtime 함수 호출
	printf("%.2lf", avgtime(bk, N));//평균대기시간 출력
}