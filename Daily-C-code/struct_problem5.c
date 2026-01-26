/* write a function that accepts a pointer to a student structure with
 fields for id,name, year ,gpa and midifies its grades
*/
#include<stdio.h>
#include<string.h>
struct student{
    int id;
    char name[50];
    int year;
    float gpa;
    char grade[5];

};
void stud(struct student *,int n);

int main(){
    struct student s1[10];
    struct student *sptr=s1;
    int n;
    printf("Enter number of student:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Student details %d\n",i+1);
        printf("Enter student id: ");
        scanf(" %d",&s1[i].id);
        printf("Enter student name ");
        scanf(" %s",s1[i].name);
        printf("Enter student year: ");
        scanf(" %d",&s1[i].year);
        printf("Enter student gpa: ");
        scanf(" %f",&s1[i].gpa);
        printf("Enter student  grade:");
        scanf("%s",s1[i].grade);
    }
    stud(sptr,n);
    printf("After modify\n");
    for(int i=0;i<n;i++){
        printf("The stuedent %d %s %d %.2f %s",s1[i].id,s1[i].name,s1[i].year,s1[i].gpa,s1[i].grade);
    }
    
    return 0;
}
void stud(struct student *s,int n){
    for(int i=0;i<n;i++){
     if(s[i].gpa>=9.0){
       strcpy( s[i].grade,"A");
    }else if(s[i].gpa<9.0 && s[i].gpa>=8.0){
        strcpy( s[i].grade,"b");
    }else{
    strcpy( s[i].grade,"c");
        

     }
    }
}
