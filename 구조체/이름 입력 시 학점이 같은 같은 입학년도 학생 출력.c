#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)
struct student {
	char name[10];//이름
	char stnum[11];//학번
	char e;//학점
};
int main() {
	struct student st[5];//크기가 5인 구조체 배열 st선언
	for (int i = 0; i < 5; i++) {//5번 반복하는 반복문
		scanf("%s %s %c ", &st[i].name, &st[i].stnum, &st[i].e);//이름,학번,학점 입력
	}
	char n[10];//길이가 10인 문자열
	int cnt = 0;//정수형 변수 cnt 선언 후 0으로 초기화
	int x = 0;//정수형 변수 x 선언 후 0으로 초기화
	scanf("%s", &n);//문자열 입력
	for (int i = 0; i < 5; i++) {//5번 반복하는 반복문
		if (strcmp(n, (st[i]).name) == 0) {//이름과 문자열n이 같은 조건
			for (int j = 0; j < 5; j++) {//5번 반복하는 반복문
				if (strcmp(st[i].name, st[j].name) != 0 && st[i].e == st[j].e) {//st[i].name와 st[j].name이 같지 않고 학번이 같은 조건
					for (int k = 0; k < 4; k++) {//4번 반복하는 반복문
						if (st[i].stnum[k] == st[j].stnum[k]) {//두 학번이 같은 조건
							cnt++;//cnt 값 1 증가
						}
					}
					if (cnt == 4) {//cnt가 4인 조건
						printf("%s ", st[j].name);//이름 출력
						x = 1;//x에 1대입
					}
					cnt = 0;//cnt에 0 대입
				}
			}
			int num = (atoi(st[i].stnum) / 1000000);//문자열인 학번을 정수형으로 변환 후 앞 4자리만 num에 대입
			int nnum = num % 131;//131로 나눈 나머지
			if (x == 0) {//x가 0인 조건
				printf("0");//0출력
			}
			printf("\n%d %d", num, nnum);//학번 앞 4자리와 131로 나눈 나머지 출력
		}
	}
}