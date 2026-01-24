// declare a pointer to a char and use it to read and print a character entered by the user 

#include<stdio.h>
 int main(){
    char name;
    char *ptr = &name;
    printf("Enter name :");
    scanf("%c",ptr);
    printf("The name of user is %c",*ptr);
    return 0;

 }