#include <stdio.h>

int max( int a, int b );

int main()
{    
    int a, b;

    scanf("%d %d", &a, &b);
    printf("max = %d\n", max(a, b));

    return 0;
}

/* 练习5-2 找两个数中最大者 */
int max( int a, int b ){
    return (a - b > 0) ? a : b;
}