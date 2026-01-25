#include<stdio.h>

struct student {
    int rollno;
    char name[20];
    float marks;
}s1;

void printfd(struct student student);
void pointer(struct student *stud);

int main(){
    struct student s1={101,"Amit",100.0};

    printfd(s1);
    printf("\nStudent details\nRollno: %d\nName: %s\nMarks: %.2f",s1.rollno,s1.name,s1.marks);
    pointer(&s1);
    printf("\nStudent details\nRollno: %d\nName: %s\nMarks: %.2f",s1.rollno,s1.name,s1.marks);
    return 0;
    
}
void printfd(struct student student){
    student.marks=96.8;
    printf("\nStudent details\nRollno: %d\nName: %s\nMarks: %.2f",student.rollno,student.name,student.marks);
}
void pointer(struct student *stud){
    
    stud->marks=98.8;
    printf("\nStudent details\nRollno: %d\nName: %s\nMarks: %.2f",stud->rollno,stud->name,stud->marks);
}