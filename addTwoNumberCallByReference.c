#include<stdio.h>
void add( int *p1, int *p2 );

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    add( &a,&b );




    return 0;
}
void add( int *p1, int *p2 )
{
    int sum=*p1 + *p2;
    printf("sum of numbers is %d",sum );
}
