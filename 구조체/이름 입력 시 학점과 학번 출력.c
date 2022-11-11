#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct student {
	char name[10];//학생이름
	char stnum[11];//학번
	char e;//학점
};
int main() {
	struct student st[5];//크기가 5인 구조체 배열 st선언
	for (int i = 0; i < 5; i++) {//5번 반복하는 반복문
		scanf("%s %s %c ", st[i].name, st[i].stnum, &st[i].e);//이름, 학번, 학점 입력
	}
	char n[10];//길이가 10인 문자열
	scanf("%s", &n);
	for (int i = 0; i < 5; i++) {//5번 반복하는 반복문
		if (strcmp(n, (st[i]).name) == 0) {//이름과 문자열n이 같은 조건
			printf(" %s %c", st[i].stnum, st[i].e);//학번과 학점 출력
			break;//break
		}
	}
}