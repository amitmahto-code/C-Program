// write program that input n display following ex:- n=5 output= 1,2,3,4,5

#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        printf("%d\n",i);
    }
    return 0;
}