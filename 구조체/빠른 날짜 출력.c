#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct day {
	int y, m, d;//년, 월, 일
};
struct day* select_min(struct day* e1, struct day* e2) {
	if ((*e1).y < (*e2).y) {//첫번째로 입력한 년도가 두번째로 입력한 년도보다 빠른 조건
		return e1;//첫번째 년월일 반환
	}
	else if ((*e1).y > (*e2).y) {//두번째로 입력한 년도가 첫번째로 입력한 년도보다 빠른 조건

		return e2;//두번째 년월일 반환
	}
	else {//첫번째로 입력한 년도와 두번째로 입력한 년도와 같은 조건
		if ((*e1).m < (*e2).m) {//첫번째로 입력한 월이 두번째로 입력한 월보다 빠른 조건
			return e1;//첫번째 년월일 반환
		}
		else if ((*e1).m > (*e2).m) {//두번째로 입력한 월이 첫번째로 입력한 월보다 빠른 조건
			return e2;//두번째 년월일 반환
		}
		else {//첫번째로 입력한 월과 두번째로 입력한 월이 같은 조건
			if ((*e1).d < (*e2).d) {//첫번째로 입력한 일자가 두번째로 입력한 일자보다 빠른 조건
				return e1;//첫번째 년월일 반환
			}
			else if ((*e1).d > (*e2).d) {//두번째로 입력한 일자가 첫번째로 입력한 일자보다 빠른 조건
				return e2;//두번째 년월일 반환
			}
			else {//두개다 년월일이 같은 조건
				return e1;//첫번째 년월일 반환
			}
		}
	}
}
int main() {
	struct day s[2], * p = s;//크기가 2인 구조체 배열 s 선언 후 포인터 *p와 연결
	scanf("%d/%d/%d", &s[0].y, &s[0].m, &s[0].d);//년월일 입력
	scanf("%d/%d/%d", &s[1].y, &s[1].m, &s[1].d);//년월일 입력
	printf("%d/%d/%d", (*select_min(p, p + 1)).y, (*select_min(p, p + 1)).m, (*select_min(p, p + 1)).d);//빠른 날짜 출력
}