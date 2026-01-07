// Array in structure how it work and how to get input/ouput
#include<stdio.h>
struct Student{
    int rollno;
    char name[25];
    float marks;
};
int main(){
    struct Student student[5]={
        {01,"Amit",95.87},
        {02,"Bhavesh",87.87},
        {03,"Kunal",87.98},
        {04,"Gaurav",99.99},
        {05,"Ram",100},
    } ;
    for(int i=0;i<5;i++){
        printf("\nStudent detail %d:= Rollno= %d, Name= %s, Marks= %.2f",i+1,student[i].rollno,student[i].name,student[i].marks);
    }
    return 0;
}