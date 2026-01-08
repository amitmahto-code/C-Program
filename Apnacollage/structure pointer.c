//  structure pointer & arrow operator  
#include<stdio.h>
struct Student{
    int rollno;
    char sname[25];
    float marks;
};
int main(){
    struct Student S1={101,"Amit",95.00};
    struct Student *stud_ptr=&S1;
    //This syntex more concise 
    printf("Roll no: %d , Student name: %s, Marks: %.2f",(*stud_ptr).rollno,(*stud_ptr).sname,(*stud_ptr).marks);
    //This is arrow opertion 
    printf("\nRoll no: %d , Student name: %s, Marks: %.2f",stud_ptr->rollno,stud_ptr->sname,stud_ptr->marks);
    return 0;
}