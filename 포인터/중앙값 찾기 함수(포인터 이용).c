#include <stdio.h>
#pragma warning(disable : 4996)

int mid(int ar[3]) {//중앙값 설정할 함수
	int q = 0;//변수 q를 0으로 초기화
	int tmp = 0;//변수 tmp를 0으로 초기화
	for (int i = 0; i < 3; i++) {//3번 반복하는 반복문
		for (int k = i; k < 3; k++) {//3번 반복하는 반복문
			if (ar[i] < ar[k]) {//내림차순 정렬
				tmp = ar[i];//tmp에 ar[i]대입
				ar[i] = ar[k];//ar[i]에 ar[k] 대입
				ar[k] = tmp;//ar[k]에 tmp 대입
			}
		}
	}
	q = ar[1];//q에 중앙값 대입
	return q;
}

int main() {
	int x[3];//크기가 3인 배열 선언
	int* p = x;//포인터 p와 배열x 연결
	for (int i = 0; i < 3; i++) {//3번 반복하는 반복문
		scanf("%d", (p + i));//p+i에 정수 입력
	}
	mid(p);//mid 함수 호출
	printf("%d", mid(p));//출력
}