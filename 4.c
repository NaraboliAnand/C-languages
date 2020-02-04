#include<stdio.h>
static int x=5;
main()
{
	int x=9;
	{
		x=4;
	}
	printf("%d",x);
}
