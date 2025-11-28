//write the program that input day number and display weekend and weekday
#include<stdio.h>
int main(){
    int day;
    printf("enter day number =");
    scanf("%d",&day);
    switch(day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("weekday");
        break;
        case 6:
        case 7:printf("weekend");
        break;
        default:printf("nvalid");
    }
    return 0;
}