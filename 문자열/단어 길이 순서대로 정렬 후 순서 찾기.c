#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	char a[1001] = { '\0', };//크기가 1001인 배열 a 선언 후 null로 초기화
	char* pa[100] = { '\0', };//크기가 100인 포인터 배열 *pa 선언 후 null로 초기화
	int k;//정수형 변수 k 선언
	gets(a);//a에 값 입력
	scanf("%d", &k);//k에 정수 입력
	int n = strlen(a);//문자열 a의 길이를 정수형 변수 n에 대입
	pa[0] = a;//pa[0]과 a 연결
	int cnt2 = 1;//정수형 변수 cnt2 선언 후 1 로 초기화
	for (int i = 0; i < n; i++) {//n번 반복하는 반복문
		if (a[i] == ' ') {//a[i]가 공백인 조건
			a[i] = '\0';//a[i]에 null 대입
			pa[cnt2++] = a + i + 1;//pa[cnt2++]에 a + i + 1 대입
		}
	}
	char* tmp = { '\0', };//포인터tmp 선언 후 null로 초기화

	for (int i = 0; i < cnt2; i++) {//단어의 길이가 긴 것 부터 정렬,cnt2번 반복하는 반복문
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2-1번 반복하는 반복문
			if (strlen(pa[j]) < strlen(pa[j + 1])) {//pa[j]의 길이가 pa[j+1]보다 작은 조건
				tmp = pa[j];//tmp에 pa[j]연결
				pa[j] = pa[j + 1];//pa[j]에 pa[j+1]연결
				pa[j + 1] = tmp;//pa[j+1]에 tmp 연결
			}
		}
	}
	for (int i = 0; i < cnt2; i++) { //길이가 같은 단어들끼리 사전순으로 정렬, cnt2번 반복하는 반복문
		for (int j = 0; j < cnt2 - 1; j++) {//cnt2-1번 반복하는 반복문
			if (strlen(pa[j]) == strlen(pa[j + 1])) {//pa[j]의 길이와 pa[j+1]길이가 같은 조건
				if (strcmp(pa[j], pa[j + 1]) > 0) {//사전순으로 정렬하는 조건
					tmp = pa[j];//tmp에 pa[j]연결
					pa[j] = pa[j + 1];//pa[j]에 pa[j+1]연결
					pa[j + 1] = tmp;//pa[j+1]에 tmp 연결
				}
			}
		}
	}
	printf("%s ", pa[k - 1]);//pa[k-1]의 문자열 출력
}