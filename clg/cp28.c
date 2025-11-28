// write a peoram that input n display following pattern using while loop
#include<stdio.h>
int main(){
    int n;int sum=0;int i=1;
    printf("enter number");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\t",i);
        
        sum+=i*i;
        i++;

    }printf("sum=%d",sum);
    return 0;
}