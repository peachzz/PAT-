#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));

    return 0;
}

/* 习题5-1 符号函数 */
int sign( int x ){
    if(x ==0)
        return 0;
    return ( x > 0) ? 1 : -1;
}