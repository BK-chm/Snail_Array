#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int arr[50][50];
    int len, idx, i, j;
    int s = 0, w = -1, inc = 1, val = 0;

    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%d", &len);
    idx = len;

    while (1)
    {
        for (i = 0; i < idx; i++)  // ���������� �迭 ä���ֱ�
        {
            val++;
            w = w + inc;    
            arr[s][w] = val;  // ���� ��ȭ�� �ְ� ���� ��ȭ�� ����.
        }
        idx = idx - 1; /* �迭�� ä������ Ƚ���� idx, idx - 1, idx - 1, idx - 2, idx - 2 .....�̴�,
                          �� ���ο��� ���������� ��ȯ�� ��� idx�� ���� 1�� �����ϸ� ���ο��� ���������� ��ȯ�� idx���� ������ ����. */

        if (val == len * len) //val�� ���� ä���ִ� �������� idx�� ���� ����ǹǷ� ���� len�� ����Ͽ���. 
            break;   

        for (i = 0; i < idx; i++)  // ���������� �迭 ä���ֱ� 
        {
            val++;
            s = s + inc;
            arr[s][w] = val;  // ���� ��ȭ�� �ְ� ���� ��ȭ�� ����.
        }
        inc = inc * -1; // �迭�� ä���ִ� ���°� ����, �Ʒ�, ������, ������ �����̹Ƿ� ���������� �迭�� ������ inc�� ���� ������ �ٲ���Ѵ�. 
    }

    for (i = 0; i < len; i++)   
    {
        for (j = 0; j < len; j++)
            printf("%5d", arr[i][j]); // �迭 ���
        printf("\n");
    }
    return 0;
}