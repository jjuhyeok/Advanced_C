#include <stdio.h>
#pragma warning(disable: 4996)
int add_to_k(int* str, int* end) {
	int sum = 0;//���� sum ���� �� 0���� �ʱ�ȭ
	for (str; str <= end; str++)//str++�ϸ鼭 end���� �ݺ��ϴ� �ݺ���
		sum += *str;//sum�� *str�� ���ϱ�
	return sum;//sum ��ȯ
}

void main() {
	int N, sum = 0;//���� N,sum ����
	int d[100] = { 0 }, * pd = d;//ũ�Ⱑ 100�� �迭 d ���� �� *pd�� �迭 d ����

	scanf("%d", &N);//N�� ������ �Է�
	for (pd = d; pd < d + N; pd++)//N��ŭ �ݺ��ϰ� pd++�ϴ� �ݺ���
		scanf("%d", pd);//pd�� ������ ����

	for (pd = d; pd < d + N; pd++)//N��ŭ �ݺ��ϰ� pd++�ϴ� �ݺ���
		sum += add_to_k(d, pd);//add_to_k�Լ� ȣ���ϸ鼭 sum�� �÷���

	printf("%d", sum);//sum�� ���
}