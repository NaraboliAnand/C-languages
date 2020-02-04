#include<stdio.h>
extern inline int min(int a,int b)
{
	return a<b?a:b;
}
main()
{
	int m;
	m=min(3,-5);
	printf("%d\n",m);
}
