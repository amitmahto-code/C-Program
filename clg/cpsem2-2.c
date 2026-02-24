/* Write a program to create a structure of five student with a member name roll no, 3 subject marks , calculate total 
and percatange.Display student's details in descending order on marks */

#include<stdio.h>
#include<math.h>
struct student_details{
    char name [50];
    int roll_no;
    int sub1,sub2,sub3;
    int total;
    float percentage;
}s[5];

int main(){
    
    for(int i =0;i<5;i++){
        printf("Enter name ");
        scanf("%s",s[i].name);
        printf("Enter rollno ");
        scanf("%d",&s[i].roll_no);
        printf("Enter subject 1 marks ");
        scanf("%d",&s[i].sub1);
        printf("Enter subject 2 marks ");
        scanf("%d",&s[i].sub2);
        printf("Enter subject 3 marks ");
        scanf("%d",&s[i].sub3);
        s[i].total=s[i].sub1+s[i].sub2+s[i].sub3;
        s[i].percentage=s[i].total/300.0*100;
        
       struct student_details temp;

    for(int i = 0; i < 4; i++){
        for(int j = i + 1; j < 5; j++){
            if(s[i].total < s[j].total){
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    }
    for(int i=0;i<5;i++){
    printf("\nName= %s\nRoll no=%d\nSubject 1=%d\nSubject 2=%d\nSubject 3=%d\nTotal marks=%d\nPercentage=%.2f",s[i].name,s[i].roll_no,s[i].sub1,s[i].sub2,s[i].sub3,s[i].total,s[i].percentage);
    }
    return 0;
}