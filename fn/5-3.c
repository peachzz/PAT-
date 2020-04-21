#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

/* 练习5-3 数字金字塔 */
void pyramid( int n ){
    int i,j,k;
    for(i = 0; i < n ; i ++){
    	
    	for(j = 0; j < n-i-1; j++)
		{
			printf(" ");
		}
		
		for(k =i+1; k > 0; k--)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
}