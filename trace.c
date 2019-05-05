#include<stdio.h>
int trace( int *x,int *y);
int main()
{
    int a=4,b=7;


    trace(&a,&b);
    printf("%d %d",a,b);

    return 0;
}
int trace( int *x,int *y)
{

    *x=*x-1;
    *y=*y+1;
}
