// write a function to find square root of number 

#include<stdio.h>

int  root(int n);
int main(){
    int n;
    printf("root of number %d",root(n));
    return 0;
}
int root( int n){

    printf("enter number");
    scanf("%d",&n);
    
    return n*n;



}