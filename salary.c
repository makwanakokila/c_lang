#include<stdio.h>
int main()
{
    int base_salary,HRA,DA,TA,salary;
    printf("Enter base salary : ");
    scanf("%d",&base_salary);
    printf("Enter HRA : ");
    scanf("%d",&HRA);
    printf("Enter DA : ");
    scanf("%d",&DA);
    printf("Enter TA : ");
    scanf("%d",&TA);

    salary=base_salary+HRA+DA+TA;
    printf("salary is %d",salary);
}