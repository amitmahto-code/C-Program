/*write a c program to create employee with a member employee id employee name and basic salary 
Read employee information from the user and calculate net salary where 
salary =basic salary +HRA +DA-PF.HRA is 10% of the basic salary. DA is 50% of basic salary and PF is 20% of basic salary*/

#include<stdio.h>

struct employee {
    int e_id;
    char ename[20];
    int basic_salary;
    float net_salary;
}e1;

int main(){
    float HRA,DA,PF;
    printf("Enter employee id: ");
    scanf("%d",&e1.e_id);
    printf("Enter employee name: ");
    scanf("%s",&e1.ename);
    printf("Enter basic salary: ");
    scanf("%d",&e1.basic_salary);

    HRA = (e1.basic_salary/100)*10;
    DA = (e1.basic_salary/100)*50;
    PF =(e1.basic_salary/100)*20;
    e1.net_salary=e1.basic_salary +HRA +DA-PF;
    printf("Net salary:= %.2f",e1.net_salary);
    return 0;
}