//write a program that input number display square,cube double of number;
#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    printf("Square%d\n",n*n);
    printf("cube%d\n",n*n*n);
    printf("Double%d",n*2);
    return 0;
}