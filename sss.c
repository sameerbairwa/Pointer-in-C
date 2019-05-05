#include<stdio.h>
int main()
{
	 x=5;
	printf("%d",&x);
	int *p;
	p=&x;
	printf("\n%d",p);
	printf("\n%d",*p);
	printf("\n%d",&p);
	int q=&p;
	printf("\n%d",q);
	printf("\n%d",&q);


	return 0;
}
