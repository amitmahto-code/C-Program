//writr program that n display following series ex:- n=5 output=1,4,9,16,25
#include<stdio.h>
int main(){
    int n;
    printf("enter number ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d\n",i*i);
    }
    return 0;

}