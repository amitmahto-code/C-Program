#include<stdio.h>
int main()
{   
    for(int i=1;i<=10 ;i++){
    printf("enter number:\n ");
    scanf("%d",&i);
    if(i % 2!=0)
    printf(" prime number\n");
    else{
        printf("not prime number\n");
        }
    }
}