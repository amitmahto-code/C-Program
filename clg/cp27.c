//write that input n display n using while loop ex=n=5 output= 12345;
#include<stdio.h>
int main(){
    int n;int i=1;
    printf("enter number");
    scanf("%d",&n);
    while(i<=n){
            
        printf("%d",i);
        i++;
    }
    return 0;
}