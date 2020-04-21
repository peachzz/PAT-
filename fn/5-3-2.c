#include <stdio.h>
#include <math.h>

double dist( double x1, double y1, double x2, double y2 );

int main()
{    
    double x1, y1, x2, y2;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    printf("dist = %.2f\n", dist(x1, y1, x2, y2));

    return 0;
}

/* 习题5-3 使用函数计算两点间的距离 */
double dist( double x1, double y1, double x2, double y2 ){
    double l;
    if(x1 == x2)
    {
    	l = fabs(y1-y2);	
	}else if(y1 == y2)
	{
		l = fabs(x1-x2);
	}else
    	l = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    	return l;
}