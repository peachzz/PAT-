#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 习题5-5 使用函数统计指定数字的个数 */
int CountDigit( int number, int digit )
{
   int count = 0,remainder;
   if(number < 0)
        number *= -1;
    
    while(number > 10){
        remainder = number % 10;
        number /= 10;

        if(remainder == digit)
            count ++;
    }
    if(number == digit)
        count++;
    
	return count;
}