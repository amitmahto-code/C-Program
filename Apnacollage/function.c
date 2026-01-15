// writing a function to print sum of two number 
#include<stdio.h>
int sum(int,int);
int main(){
    int add;
    add = sum(4,5);
    printf("Sum opf number:= %d",add);

    return 0;
}

int sum(int a, int b){
    int sum=a+b;
    return sum;
}