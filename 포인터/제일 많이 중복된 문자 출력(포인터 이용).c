#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
	char ch[10];//크기가 10인 배열 선언
	char* p;//*p선언
	int c = 0;//변수 c선언 후 0으로 초기화
	int t = 0;//변수 t선언 후 0으로 초기화
	int tt = 0;//변수 tt선언 후 0으로 초기화
	int cccc = -1;//변수 cccc선언 후 -1로 초기화
	for (p = ch; p < ch + 10; p++) {//10번 돌아가는 반복문
		scanf("%c", p);//p에 10번 입력
	}
	for (p = ch; p < ch + 10; p++) {//10번 돌아가는 반복문
		cccc = cccc + 1;//cccc를 1씩 증가
		for (int k = 0; k < 10; k++) {//10번 돌아가는 반복문
			if (*p == *(p + k))//같을 조건
				c = c + 1;//c를 1씩 증가
		}
		if (t < c) {//t보다 c가 클 조건
			tt = cccc;//tt에 cccc대입
			t = c;//t에 c대입
		}
		c = 0;//c를 0으로 초기화
	}
	p = ch;//포인터p와 배열ch를 연결
	printf("%c %d", *(p + tt), t);//출력
	return 0;
}