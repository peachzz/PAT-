#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

/* 习题5-6 使用函数输出水仙花数 */
/**判断number是否为水仙花数，是则返回1，否则返回0**/
int narcissistic( int number )
{
    int temp,i,j,bit = 0,a,b = 0,sum= 0;
    temp = number;
    while(temp)
    {
        temp /= 10;
        bit++;
    }
    temp = number;
    for(i = 0 ; i < bit; i++ )
    {
        a = 1;
        b = temp % 10; 
        temp /= 10;
        for(j = 1 ; j <= bit; j++)
        {
            a = a * b;
        }
        sum += a;
    }
   if (sum == number)
        return 1;
    else
        return 0;

}
/**按从小到大的顺序打印出给定区间(m,n)内所有的水仙花数**/
void PrintN( int m, int n )
{
    int i;
    for(i=m+1;i<n;i++)
        if(narcissistic(i)==1)
            printf("%d\n",i);
}