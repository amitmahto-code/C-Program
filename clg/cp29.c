//write a program that input n and display following pattern using while loop ex n=5 output= 25,16,9,4,1
#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("enter number");
    scanf("%d",&n);
    while(n>0){
        printf("%d\t",n*n);
        n--;

    }return 0;
}