// write a program that input year check wheather yaar leap year or  not;
#include<stdio.h>
int main(){
    int n;
    printf("enter number = ");
    scanf("%d",&n);
    if(n%4==0){
        printf("leap year");
    }else{
        printf("not leap year");
    }
    
    return 0;

}