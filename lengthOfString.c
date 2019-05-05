#include<stdio.h>
#include<string.h>

int lengthOfString( char *p );

int main()
{
    int length,n;
    printf("Enter length of string:");
    scanf("%d",&n);
    char str[n];
    printf("Enter your string:");
    gets(str);
    char *p;
    p=str;
   length=lengthOfString( p );
   printf("%d",length);





    return 0;
}

int lengthOfString( char *p )
{
    int count=0;
    while( *p != '/0')
    {
        count++;
        p++;
    }
    return count;
}
