#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=12;
    float x=2.3666;
    char ch='s';
    FILE *fp;
    fp=fopen("out.txt","w");
    fprintf(fp,"%d %f %c",i,x,ch);
    fclose(fp);
    return 0;
}
