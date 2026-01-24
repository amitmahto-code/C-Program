//write a program that declares an integer variable and a pointer to it assign a value
// and print it using the pointer

#include<stdio.h>
int main(){
    int a;
    int *ptr=&a;
    printf("enter number ");
    scanf("%d",ptr);
    printf("the value of variable %d",*ptr);
    return 0;

}