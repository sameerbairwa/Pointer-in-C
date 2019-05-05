#include<stdio.h>
float avgArray( float arra[] );
int  main()
{
    int i;
    float arr[]={ 23.55, 55,22.6,3,40.5,18 };

    float avg=avgArray( arr);

    printf("%f",avg);
    return 0;
}
float avgArray( float arra[] )
{
    int i;
    float avg,sum=0;
    for( i=0; i<6; i++ )
    {
        sum+=arra[i];
    }
    avg=sum/6;
    return avg;

}
