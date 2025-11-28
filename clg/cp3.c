//Write a program that input principal amount rate of interest no.of year calulate simple interest 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter principal ammount interest rate no.of.year");
    scanf("%d %d %d",&a,&b,&c);
    printf("simple interest :%f",(a*b*c)/100.0);
    return 0;
}