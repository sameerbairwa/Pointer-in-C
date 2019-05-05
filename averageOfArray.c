#include<stdio.h>
int main()
{
    int n,i,avg,sum=0;
    printf("Enter number of elements :");
    scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    printf("Enter the numbers:");
    for( i=0; i<n; i++ )
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    avg=sum/n;
    printf("%d",avg);



    return 0;
}
