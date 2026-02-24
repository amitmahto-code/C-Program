/*write a c program to create a structure of student with student id , name and percentage.
Enter data of five students. Display data of those percentage is less than 70 marks*/

#include<stdio.h>

struct student{
    int sid ;
    char name[50];
    float percentage;
} student[5];

int main(){
    for(int i=0;i<5;i++){
        printf("Enter sid ");
        scanf("%d",&student[i].sid);
        printf("Enter name ");
        scanf("%s",student[i].name);
        printf("Enter percantage ");
        scanf("%f",&student[i].percentage);      
    }
printf("student details");
    for(int i=0;i<5;i++){
        if(student[i].percentage>70){
            printf("\nStudent Id =%d\nStudent name = %s\nStudent percantage=%.2f",student[i].sid,student[i].name,student[i].percentage);
        }
    }
    return 0;
}