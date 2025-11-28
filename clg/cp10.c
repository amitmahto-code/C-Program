//Write program that input a number display nuber is even or odd
#include<stdio.h>
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    if(n%2==1){
        printf("odd");
    }else {
        printf("even");
    }
    return 0;
}