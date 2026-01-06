//Create a program that computes the sum of the digits of an integer
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter number : ");
    scanf(" %d",&n);
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    printf("sum %d",sum);
    return 0;
}