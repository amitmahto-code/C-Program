/*write a program that input gender and age display vaild or invalid age for marriage
 (if male is should age=21 and female is should age>=18)*/
#include<stdio.h>
int main(){

    char gender;
    int age;
    printf("enter first latter male 'm'and 'f'famale ");
    scanf("%c",&gender);
    printf("enter age");
    scanf("%d",&age);
    if(gender=='m'||gender=='M' && age>=21){
        printf("vaild");
    }else if(gender=='f'|| gender=='F' && age>=18){
        printf("valid");

    }else{
        printf("invalid");
    }
    return 0;













   /* int m,f;
    char gender;

    printf("enter male age ");
    scanf("%c",&m);
    printf("enter female age ");
    scanf("%d",&f);
    if(m>=21 && f>=18 ){
        printf("vaild");
    }else{
        printf("invaild");
    }
    return 0;*/
}