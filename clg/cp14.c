/* Write a program that day number and display day name (Day 1=sunday ,day 2=monday 
and so more)
*/
#include<stdio.h>
int main(){
    int day;
    printf("enter day number");
    scanf("%d",&day);
    switch(day){
        case 1:printf("moday");
                break;
        case 2:printf("tuesday");
                break;
        case 3:printf("wednesday");
                break;
        case 4:printf("Thursday");
                break;
        case 5:printf("Friday");
                break;
        case 6:printf("saturday");
                break;
        case 7:printf("sunday");
                break;
        default:printf("invalid");
    }
    return 0;

}