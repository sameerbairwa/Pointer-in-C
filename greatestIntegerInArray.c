#include<stdio.h>
int main()
{
    int arr[]={ 2,6,3,8,7};
    int *ptr,max,i;         //*ptr=arr;
    ptr=arr;
    max=arr[0];
    for( i=0; i<5; i++ )
    {
        if( max < *( ptr + i ) )
        {
            max=*( ptr + i );
        }
    }
    printf("%d",max);



    return 0;
}
