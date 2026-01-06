//learning who work structure
#include<stdio.h>
struct Student{
    int rollno;
    char name[10];
    float marks;
};
int main(){
struct Student n1;
printf("enter student deatils \n");
printf("enter roll number: ");
scanf(" %d",&n1.rollno);
printf("enter name: ");
scanf("%s",n1.name);
printf("enter marks: ");
scanf(" %f",&n1.marks);

printf("Here student details \n ");
printf("Roll no: %d \tNmae: %s \t Marks: %.2f",n1.rollno,n1.name,n1.marks);
return 0;
}