#include<stdio.h>
struct student
{
    int id;
    char name[10];
    float percentage;

};

int main()
{
    struct student record1={1,"Raju",90.05};
    struct student *ptr;
    ptr=&record1;
    printf("id is: %d\n",ptr->id);
    printf("name is %s\n",ptr->name);
    printf("percetage is %.2f\n",ptr->percentage);

    return 0;
}
