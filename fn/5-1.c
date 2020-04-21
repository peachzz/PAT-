#include <stdio.h>

int sum(int m, int n);

int main()
{    
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));

    return 0;
}

/* 求m到n之和 */
int sum(int m, int n)
{
    int temp = m+n;
    while(++m != n)
    {
        temp += m; 
    }    
    return temp;
}