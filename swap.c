#include<stdio.h>
void swapTwoInteger( int *p1, int *p2 );
int main()
{
    int x=10,y=15;

    swapTwoInteger( &x,&y );


    return 0;
}

void swapTwoInteger( int *p1, int *p2 )
{

    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
    printf("swap after integer %d %d",*p1,*p2);


}
