#include <stdio.h>
#include <math.h>


double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}
/* 你的代码将被嵌在这里 */

double factorial(int x){
	double y = 1;
	for (int i = x; i > 0; --i)
	{
		y *= i;
	}
	return y;
}

double funcos( double e, double x )
{
	double item = 1,cos = 0; 
	int i = 0,p = 1;  // i： 每一项 p：指定符号位
	while(item >= e){
		item = pow(x,i)/factorial(i); //每一项
		cos += p * item;
		i += 2;
		p = -p;
	}
	return cos;
}