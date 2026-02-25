/* wirte a c program that creates structure of employee with member Empid,Empname,Qulification and Empsalary by 
taking input of 5 employee display the employee whose qualification id "MBA" and salary greate than 20000*/

#include<stdio.h>
#include<string.h>
struct employee{
    int empid;
    char empname[30];
    char Qulification[40];
    int empsalary;
    
}e[5];

int main(){
    for(int i=0;i<5;i++){
        printf("Enter Employee id ");
        scanf("%d",&e[i].empid);
        printf("Enter Empname ");
        scanf("%s",e[i].empname);
        printf("Enter Qulification ");
        scanf("%s",e[i].Qulification);
        printf("Enter Employee salary ");
        scanf("%d",&e[i].empsalary);
    }

    for(int i=0;i<5;i++){
        if(strcmp(e[i].Qulification,"MBA")==0 && e[i].empsalary>20000){
            printf("\nEmpid= %d\nEmpname= %s\nQulification= %s\nEmpsalary= %d",e[i].empid,e[i].empname,e[i].Qulification,e[i].empsalary);
        }
    }
    return 0;
}