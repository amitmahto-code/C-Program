#include<stdio.h>
int main()
{
    int marks;
    printf("enter marks :");
    scanf("%d",&marks);

    if ( marks<=30){
    printf("pass ");printf("grade 'c'");
    }
    else if(marks>30 && marks<=70){
        printf("pass");printf("grade 'B'");
    }
      else if(marks>70 && marks<=90){
        printf("pass");printf("grade 'A'");
    }
      else if(marks>90 && marks<=100){
        printf("pass");printf("grade 'A+'");
    }
    else {
    printf("enter vaild marks\n");}
    return 0;
}