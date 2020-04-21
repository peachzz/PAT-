#include <stdio.h>

int fn( int a, int n );
int SumA( int a, int n );
	
int main()
{
    int a, n;

    scanf("%d %d", &a, &n);
    printf("fn(%d, %d) = %d\n", a, n, fn(a,n));		
    printf("s = %d\n", SumA(a,n));	
	
    return 0;
}

/* 你的代码将被嵌在这里 */
//给定两个均不超过9的正整数a和n，要求编写函数求a+aa+aaa++⋯+aa⋯a（n个a）之和
int fn( int a, int n ){
	int num = a;
	if (a > 9 || n > 9)
		return 0;

	for (int i = 0; i < n-1; ++i)
	{
		num *= 10; 
		num += a;
	}
	return num;
}

int SumA( int a, int n ){
	int sum  = 0;

	for (int i = 1; i <= n; ++i)
	{
		sum += fn(a,i);
	}
	return  sum;
}