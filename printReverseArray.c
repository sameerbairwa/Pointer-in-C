#include<stdio.h>

int main()
{
    int i, n, *p;
    printf("Enter number of element:");
    scanf("%d",&n);
    int arr[n];
    p=arr;
    printf("Enter elements:");
    for( i=0; i<n; i++ )
    {
        scanf("%d",p+i);

    }

    for( i=n-1; i>=0; i-- )
    {
        printf("%2d",*(p+i) );
    }



    return 0;
}
