#pragma warning(disable:4996)
#include<stdio.h>

int main() {

	int x, y, z; //정수를 입력받을 변수 x,y,z 선언
	int* px, * py, * pz, * tmp; // 포인터 px,py,tmp 선언
	px = &x;//x의 주소값을 px에 대입
	py = &y;//y의 주소값을 py에 대입
	pz = &z;//z의 주소값을 pz에 대입

	scanf("%d %d %d", px, py, pz);//변수들 입력

	tmp = pz;//pz의 값을 tmp에 대입
	pz = py;//py의 값을 pz에 대입
	py = px;//px의 값을 py에 대입
	px = tmp;//tmp의 값을 px에 대입
	printf("%d %d %d", *px, *py, *pz);//*px,*py,*pz를 출력
	return 0;

}