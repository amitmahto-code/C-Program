//write a program to change the value of an integer variable using a pointer and 
//the * operator
#include<stdio.h>
int main(){
    int num=4;
    int *ptr1=&num;
    printf("value of num %d",*ptr1);
    *ptr1=87;
    printf("\nvalue of num %d",*ptr1);

}