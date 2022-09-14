#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n = 5;//정수형 변수 n 선언 후 5 대입
	int* p = (int*)malloc(n * sizeof(int));//포인터 p 선언 후 5* sizeof(int) 동적할당
	int* q = (int*)malloc(n * sizeof(int));//포인터 q 선언 후 5* sizeof(int) 동적할당
	for (int i = 0; i < n + 1; i++) {//n+1번만큼 반복하는 반복문
		if (i >= 20) {//i가 20이상인 조건
			break;//break
		}
		if (i >= n) {//i가 n 이상인 조건
			n = n + 3;//n값 3 증가
			q = (int*)malloc(n * sizeof(int));//q에 n*sizeof(int) 동적할당
			for (int k = 0; k < i; k++) {//i만큼 반복하는 반복문
				q[k] = p[k];//p[k]를 q[k]에 복사
			}
			free(p);//해제
			p = q;//p에 q를 연결

		}
		scanf("%d", &p[i]);//p[i]에 정수 입력

		if (p[i] == -1) {//p[i]가 -1인 조건
			break;//break
		}
	}
	for (int i = 0; ; i++) {//반복문
		printf(" %d", p[i]);//p[i]값 출력
		if (p[i] == -1) {//p[i]가 -1인 조건
			break;//break
		}
	}
	free(p);//p 메모리 해제
}