//write a program that input percentage display percentage is vaild or invalid 
#include<stdio.h>
int main (){
    float per;
    printf("enter percentage ");
    scanf("%f",&per);
    if(0<per && per<=100){
        printf("valid");
    }else{
        printf("invalid");
    }
    return 0;
}