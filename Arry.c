/*#include<stdio.h>
int main(){
    int marks[3];
    printf("enter number");
    scanf("%d%d%d",&marks[0],&marks[1],&marks[2]);
    printf("%d%d%d\t",marks[2],marks[1],marks[0]);
    return 0;
}*/
#include <stdio.h>
int main(){
    int age = 22;
    int *ptr=&age;
    printf("ptr=%u\n",ptr);
    ptr++;
    printf("ptr=%u\n",ptr);
    age++;
    printf("ptr=%d",age);
    
}