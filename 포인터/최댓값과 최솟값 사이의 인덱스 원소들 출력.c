#include <stdio.h>
#pragma warning(disable : 4996)
int* MAX(int* ar) {//MAX함수
	int* p = ar;//포인터 p 선언 후 ar과 연결
	int* pmax = ar;//포인터 pmax선언 후 ar과 연결
	for (p = ar; p < ar + 100; p++) {//100번 반복하는 반복문
		if (*p != 0 && *p >= *pmax)//*p가 0이 아니면서 *p>=*pmax인 조건
			pmax = &(*p);//pmax에 &(*p) 대입
	}
	return pmax;//pmax 반환
}
int* MIN(int* ar) {//MIN함수
	int* p;//포인터 p 선언
	int* pmin = ar;//포인터 pmin선언 후 ar과 연결
	for (p = ar; p < ar + 100; p++) {//100번 반복하는 반복문
		if (*p != 0 && *p <= *pmin)//*p가 0이 아니면서 *p<=*pmin인 조건
			pmin = &(*p);//pmin에 &(*p) 대입
	}
	return pmin;//pmin 반환
}

void main() {
	int N, i;//정수 N,i 선언
	scanf("%d", &N);//N에 정수 대입
	int ar[100] = { 0 };//크기가 100인 ar 선언 후 0으로 초기화
	int* max = &ar[0], * min = &ar[0];//포인터 max 선언 후 &ar[0]과 연결, 포인터 min 선언 후 &ar[0]과 연결
	int* p;//포인터 p 선언

	for (i = 0; i < N; i++) {//i가 0부터 1씩 증가하며 i<N까지 반복하는 반복문
		int ar[100] = { 0 };//크기가 100인 배열 ar 선언 후 0으로 초기화
		for (p = ar; p < ar + 100; p++) {//100번 반복하는 반복문
			scanf("%d", p);//p에 정수 입력
			if (*p == 0)//*p가 0인 조건
				break;//탈출
		}
		max = MAX(ar);//max에 MAX(ar) 대입
		min = MIN(ar);//min에 MIN(ar) 대입
		if (max < min && min - max != 1) {//max < min이면서 min - max !=1 인 조건
			for (p = max + 1; p < min; p++)//p에 max+1을 대입시키고 p++하며 p<min까지 반복하는 반복문
				printf("%d ", *p);//출력
		}
		else if (min < max && max - min != 1) {//min < max 이면서 max - min !=1 인 조건
			for (p = min + 1; p < max; p++)//p에 min+1을 대입시키고 p++하며 p<max까지 반복하는 반복문
				printf("%d ", *p);//출력
		}
		else {

			printf("none");//none출력

		}
	}

}