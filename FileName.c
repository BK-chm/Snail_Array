#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
    int arr[50][50];
    int len, idx, i, j;
    int s = 0, w = -1, inc = 1, val = 0;

    printf("숫자를 입력하시오: ");
    scanf("%d", &len);
    idx = len;

    while (1)
    {
        for (i = 0; i < idx; i++)  // 가로형태의 배열 채워넣기
        {
            val++;
            w = w + inc;    
            arr[s][w] = val;  // 열의 변화만 있고 행의 변화는 없다.
        }
        idx = idx - 1; /* 배열을 채워가는 횟수가 idx, idx - 1, idx - 1, idx - 2, idx - 2 .....이다,
                          즉 가로에서 세로형태의 전환의 경우 idx의 값은 1씩 감소하며 세로에서 가로형태의 전환은 idx값에 변경이 없다. */

        if (val == len * len) //val의 값을 채워넣는 과정에서 idx의 값은 변경되므로 변수 len을 사용하였다. 
            break;   

        for (i = 0; i < idx; i++)  // 세로형태의 배열 채워넣기 
        {
            val++;
            s = s + inc;
            arr[s][w] = val;  // 행의 변화는 있고 열의 변화는 없다.
        }
        inc = inc * -1; // 배열을 채워넣는 형태가 왼쪽, 아래, 오른쪽, 위쪽의 형태이므로 세로형태의 배열이 끝나면 inc의 값을 음수로 바꿔야한다. 
    }

    for (i = 0; i < len; i++)   
    {
        for (j = 0; j < len; j++)
            printf("%5d", arr[i][j]); // 배열 출력
        printf("\n");
    }
    return 0;
}