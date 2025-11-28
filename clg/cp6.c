//write a program that input two number and display biggest number 
#include<stdio.h>
int main (){
    int n1,n2;
    printf("enter number");
    scanf("%d%d",&n1,&n2);
    if (n1<n2)
    {
        printf("%d",n2);
    }else{
        printf("%d",n1);
    
    }
}