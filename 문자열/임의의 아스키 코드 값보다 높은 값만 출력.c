#include <stdio.h>
#pragma warning(disable : 4996)

int main() {
    int st;//������ st����
    char str[10];//������ �迭 str ����
    scanf("%d", &st);//st�� ���� �Է�
    for (int i = 10, j = 0; ; i = i * 10, j++) {//�ݺ���
        str[j] = ((st % i) / (i / 10) + 48);//�ƽ�Ű �ڵ带 �̿��� ((st % i) / (i / 10)+48)�� str[j]�� ����
        if (i > st * 10) {//i�� st*10���� ū ����
            str[j] = '\0';//str[j]�� �� �� �Է�
            break;//Ż��
        }
    }
    printf("%s", str);//str���
}