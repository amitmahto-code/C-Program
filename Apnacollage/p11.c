#include<stdio.h>
int main()
{
    char ch;
    printf("enter chracter:");
    scanf("%c",&ch);
    if (ch>='A'&& ch<='Z'){
        printf("upper case");
    }else{
        printf("lower case\n");
    }
    return 0;
}