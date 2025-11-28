//write a program that input character display character is valves or not 
#include<stdio.h>
int main(){
    char ch;
    printf("enter charter=\t");
    scanf("%c",&ch);
    if(ch=='a'|| ch=='A'|| ch=='e'|| ch=='E'|| ch=='i'|| ch=='I'|| ch=='o'|| ch=='O'|| 
        ch=='u'|| ch=='U'){
            printf("valves");
        }else{
            printf("invalid");
        }
        return 0;

}