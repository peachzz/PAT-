#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 习题6-3 使用函数输出指定范围内的完数 */

//factorsum须返回int number的因子和
int factorsum( int number ){
	int sum = 1;
	for (int i = 2; i <= number/2; ++i)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
//函数PrintPN要逐行输出给定范围[m, n]内每个完数的因子累加形式的分解式，
//每个完数占一行，格式为“完数 = 因子1 + 因子2 + ... + 因子k”，其中完数和因子均按递增顺序给出。如果给定区间内没有完数，则输出一行“No perfect number”。
void PrintPN( int m, int n ){
	int flag = 0;
	for (int i = m + 1; i < n; ++i)
	{
		if (i == factorsum(i))
		{
			printf("%d = 1", i);
			for (int j = 2; j < i; ++j)
			{
				if (i % j == 0)
					printf("+ %d", j);
			}
			printf("\n");
			flag = 1;
		}
	}
	if(0 == flag)
		printf("No perfect number\n");
}