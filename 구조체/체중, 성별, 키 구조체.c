#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct student {
	int g;//성별
	int w;//체중
	int h;//키
};
void main() {
	struct student st[11];//크기가 11인 구조체 배열 student st[11]선언
	struct student* pst = st;//포인터 *pst와 st 연결
	int  N, g1 = 0, g2 = 0, g3 = 0;//학생수인 정수형 변수 N 선언, g1,g2,g3선언 후 0으로 초기화
	scanf("%d", &N);//학생수 입력
	for (int i = 0; i < N; i++, pst++) {//학생수만큼 반복하는 반복문
		scanf("%d%d%d", &pst->g, &pst->w, &pst->h);//성별 체중 키 입력
		if (pst->g == 1) {//남자인 조건
			if (pst->w < 60) {//체중이 60 미만인 조건
				if (pst->h < 165)//키가 165 미만인 조건
					g1++;//g1값 1 증가
				else if (pst->h < 175)//키가 165이상이고 175미만인 조건
					g2++;//g2값 1 증가
				else // 키가 175 이상인 조건
					g3++;//g3값 1 증가
			}
			else if (pst->w < 70) {//무게가 60이상이면서 70미만인 조건
				if (pst->h < 165)//키가 165 미만인 조건
					g3++;//g3값 1 증가
				else if (pst->h < 175)//키가 165이상이면서 175미만인 조건
					g1++;//g1값 1 증가
				else //키가 175 이상인 조건
					g2++;//g2값 1 증가
			}
			else {
				if (pst->h < 165)//키가 165미만인 조건
					g2++;//g2값 1 증가
				else if (pst->h < 175)//키가 165이상이면서 175미만인 조건
					g3++;//g3값 1 증가
				else //키가 175 이상인 조건
					g1++;//g1값 1 증가
			}
		}
		else {//여자인 조건
			if (pst->w < 50) {//체중이 50 미만인 조건
				if (pst->h < 165)//키가 165미만인 조건
					g1++;//g1값 1 증가
				else if (pst->h < 175)//키가 165이상이면서 175미만인 조건
					g2++;//g2값 1 증가
				else //키가 175이상인 조건
					g3++;//g3값 1 증가
			}
			else if (pst->w < 60) {//무게가 50이상이면서 60미만인 조건
				if (pst->h < 165)//키가 165미만인 조건
					g3++;//g3값 1 증가
				else if (pst->h < 175)//키가 165이상이면서 175미만인 조건
					g1++;//g1값 1 증가
				else //키가 175이상인 조건
					g2++;//g2값 1 증가
			}
			else {//무게가 70이상인 조건
				if (pst->h < 165)//키가 165미만인 조건
					g2++;//g2값 1 증가
				else if (pst->h < 175)//키가 165이상이면서 175미만인 조건
					g3++;//g3값 1 증가
				else //키가 165이상인 조건
					g1++;//g1값 1 증가
			}
		}
	}
	printf("%d %d %d", g1, g2, g3);//g1, g2, g3 값 출력

}