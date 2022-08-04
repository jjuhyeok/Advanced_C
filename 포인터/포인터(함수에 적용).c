#include <stdio.h>
#pragma warning(disable : 4996)

void input(int* i1, int* i2, int* i3) {//input함수 
	scanf("%d %d %d", i1, i2, i3);//i1,i2,i3에 정수 대입
}

void output(int* o1, int* o2, int* o3) {//output함수
	printf("%d %d %d", *o1, *o2, *o3);//*o1,*o2,*o3 출력
}

void main() {
	int x, y, z;//변수 x,y,z선언
	input(&x, &y, &z);//input 함수 호출
	output(&x, &y, &z);//output 함수 호출

}