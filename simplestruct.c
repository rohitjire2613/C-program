#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float salary;
}s1;
void main()
{
    printf("-----------------------------\n");
    printf("Enter ID:");
    scanf("%d",&s1.id);
    printf("Enter Name:");
    scanf("%s",s1.name);
    printf("Enter salary:");
    scanf("%f",&s1.salary);

    printf("ID :-%d\n",s1.id);
    printf("NAME :-%s\n",s1.name);
    printf("SALARY :-%.2f\n",s1.salary);

    printf("-----Program finish-------");
}