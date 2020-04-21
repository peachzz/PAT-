#include <stdio.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}
//letter = 4, blank = 3, digit = 2, other = 1
void StringCount( char s[] ){
	int letter = 0,blank = 0, digit = 0,other = 0,i,n;
	n = strlen(s);
	for (int i = 0; i < n; ++i)
	{
		if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
			letter++;	
		else if (s[i] == ' ' || s[i] == '\n')
			blank++;
		else if (s[i] >= '0' && s[i] <= '9')
			digit++;
		else
			other++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other );
}
