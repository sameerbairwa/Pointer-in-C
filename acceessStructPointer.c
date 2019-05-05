#include<stdio.h>
struct name
{
    int a;
    float b;


};
int main()
{
    struct name p,*ptr;
    ptr=&p;
    printf("Enter integer:");
    scanf("%d",&(*ptr).a);
    printf("Enter number");
    scanf("%f",&(*ptr).b);
    printf("displaying");
    printf("%d %.3f",(*ptr).a,(*ptr).b);


    return 0;
}
