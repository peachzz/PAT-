#include <stdio.h>

#define MAXN 10

int even( int n );
int OddSum( int List[], int N );

int main()
{    
    int List[MAXN], N, i;

    scanf("%d", &N);
    printf("Sum of ( ");
    for ( i=0; i<N; i++ ) {
        scanf("%d", &List[i]);
        if ( even(List[i])==0 )
            printf("%d ", List[i]);
    }
    printf(") = %d\n", OddSum(List, N));

    return 0;
}

/* 习题5-2 使用函数求奇数和 */
/*当n为偶数时返回1，否则返回0*/
int even( int n )
{
    return ( n%2 == 0 ) ? 1 : 0 ;
}
/*负责计算并返回传入的N个整数List[]中所有奇数的和*/
int OddSum( int List[], int N )
{
    int sum = 0,i;
    for (i = 0;i < N ;i++)
    {
        if ( even(List[i])==0 )
        {
            sum += List[i];
        }
    }
    return sum;
}