//struct initialization 
#include<stdio.h>
struct Student{
    int rollno;
    char name[10];
    float marks;
};
int main(){
    //direct initialization
    struct Student s1={01,"Ram",98.00}; 
    //Designated initialization 
    struct Student s2={.marks=96.00,.rollno=103,.name="Amit"};
    //Zero initialization
    struct Student s3={0};
    //Copy initialization
    struct Student s4=s2;
    s4.rollno=104;
    printf("Roll no: %d, Name: %s, Marks: %.2f",s1.rollno,s1.name,s1.marks);
    printf("\nRoll no: %d, Name: %s, Marks: %.2f",s2.rollno,s2.name,s2.marks);
    printf("\nRoll no: %d, Name: %s, Marks: %.2f",s3.rollno,s3.name,s3.marks); 
    printf("\nRoll no: %d, Name: %s, Marks: %.2f",s4.rollno,s4.name,s4.marks);   

    return 0;
}