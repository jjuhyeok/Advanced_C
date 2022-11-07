#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

char s_check(char* p, char* q) {
	int cnt = 0;//정수형 변수 cnt 선언 후 0으로 초기화
	for (p; p <= q; p++) {//p에서 q까지 p++하는 반복문
		if (*p >= 'a' && *p <= 'z') {//*p가 a~z인 조건
			cnt++;//cnt 1 증가
		}
	}
	return cnt;//cnt 반환
}

int main() {
	int M;//정수형 변수 M선언
	scanf("%d", &M);//M에 정수 입력
	int k1, k2;//정수형 변수 k1,k2선언
	scanf("%d %d ", &k1, &k2);//k1, k2에 정수 입력
	char ch[10][200] = { '\0', };//크기가 10,200인 이중배열 ch선언 후 null로 초기화
	for (int i = 0; i < M; i++) {//M번 반복하는 반복문
		gets(ch[i]);//ch[i]에 입력
		if ((s_check(&ch[i][k1], &ch[i][k2])) != 0) {//cnt가 0 이 아닌 조건
			if (k1 <= strlen(ch)) {//k1보다 ch의 길이가 큰 조건
				printf("%d\n", s_check(&ch[i][k1], &ch[i][k2]));//s_check 함수 호출 후 출력
			}
		}
	}

}