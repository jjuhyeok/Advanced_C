#include <stdio.h>
#pragma warning(disable: 4996)
int arrsum(int* str, int* end) {
	int sum = 0;//���� sum ���� �� 0���� �ʱ�ȭ
	for (str; str <= end; str++)//str++�ϸ鼭 end�� �ɶ����� �ݺ��ϴ� �ݺ���
		sum += *str;//sum�� sum + *str �� ����
	return sum;//sum��ȯ
}
void main() {
	int N, S, E;//���� N,S,E ����
	scanf("%d%d%d", &N, &S, &E);//N,S,E�� ������ �Է�
	int a[100] = { 0 }, * pa = a;//ũ�Ⱑ 100�� �迭a ���� �� 0���� �ʱ�ȭ, *pa�� a ����
	for (pa = a; pa < a + N; pa++)//N��ŭ �ݺ��ϰ� pa++ �ϴ� �ݺ���
		scanf("%d", pa);//pa�� ������ �Է�

	printf("%d", arrsum(a + S, a + E));//arrsum�Լ� ȣ�� �� ���
}