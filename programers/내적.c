#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// a_len은 배열 a의 길이입니다.
// b_len은 배열 b의 길이입니다.
int solution(int a[], size_t a_len, int b[], size_t b_len) {
    int answer = 0;
    while (a_len--)
        answer += a[a_len] * b[a_len];
    return answer;
}

int main()
{
    int a[4] = {1,2,3,4};
    int b[4] = {-3,-1,0,2};

    printf("정답은 (%d)\n", solution(a, 4, b, 4));
}