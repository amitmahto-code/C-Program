//write a program that input 10 number display total of all of number 
#include<stdio.h>
int main(){
    int n,sum=0;
    for(int i=1;i<=10;i++){
        printf("enter number");
        scanf("%d",&n);
        sum+=n;
    }
    printf("sum%d",sum);
    return 0;
}