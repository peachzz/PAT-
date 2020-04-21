#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

/* 习题5-4 使用函数求素数和 */
/**当用户传入参数p为素数时返回1，否则返回0**/
int prime( int p )
{
	//printf("%d ",p);
    int i,ret ;
    if(p  < 2)
    	return 0;
    	
	if(p == 2)
		return 1;
		
    for(i = 2 ; i < p ; i++)
    {
        if(p%i == 0)
        {
        	return 0;
		}
            
    }  
    return 1;
}
/**返回区间[m, n]内所有素数的和**/
int PrimeSum( int m, int n )
{
    int sum = 0;
    
  
    while(m <= n){
        if(prime(m))
        {
            sum += m;
        }
        m++;
    }
    return sum;
}