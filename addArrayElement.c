#include<stdio.h>
int main()
{
	int arr[]={2,3,4,5};
	int *ptr, sum=0, i;
	ptr=arr;
	for( i=0; i<4; i++ )
	{
		sum+=*(ptr+i);

	}
    printf("%d",sum);
	return 0;
}
