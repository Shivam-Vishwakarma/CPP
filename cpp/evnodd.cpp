//Checking EVEN or ODD using Bitwise AND operator

/*
Yes, we can check whether given number is EVEN or ODD by using Bitwise AND operator, we should know that each ODD number's first bit is 1, so here I will check first bit only, if it is high (1) that means number is ODD otherwise number is EVEN.

*/
#include <stdio.h>
int main()
{
	int a=36;
	int b=25;
	if(a&(0x01))
		printf("%d is ODD number\n",a);
	else
		printf("%d is EVEN number\n",a);

	if(b&(0x01))
		printf("%d is ODD number\n",b);
	else
		printf("%d is EVEN number\n",b);	
	
	return 0;
}
/*
Output
    36 is EVEN number 
    25 is ODD number
*/