#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct score {
	char name[10];//이름
	int sc;//점수
};
struct score* select_min(struct score* a) {
	int cnt = 0;//정수형 변수 cnt선언 후 0 대입
	for (int k = 0; k < 5; k++) {//5번 반복하는 반복문
		for (int j = 0; j < 5; j++) {//5번 반복하는 반복문
			if ((*(a + k)).sc < ((*(a + j)).sc)) {//(*(a + k)).sc가 ((*(a + j)).sc보다 작은 조건
				cnt++;//cnt 1증가
			}
		}
		if (cnt == 4) {//cnt가 4인 조건
			return a + k;// a + k 반환
		}
		cnt = 0;//cnt 0 대입
	}
}
int main() {
	struct score st[5], * p = st;//크기가 5인 구조체 st 선언 후 포인터 *p와 st 연결
	int i = 0;//정수형 변수 i 선언 후 0 대입
	for (i, p; i < 5; i++, p++) {//5번 반복하는 반복문
		scanf("%s %d", &p->name, &p->sc);//이름과 점수 입력
	}
	p = st;//포인터 p와 st 다시 연결
	i = 0;//i에 0 대입

	printf("%s %d", (*select_min(p)).name, (*select_min(p)).sc);//점수가 최하위인 학생의 이름, 점수 출력
}