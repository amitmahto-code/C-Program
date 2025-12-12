//write a program that input 10 number display total of all of number 
#include<stdio.h>
int main(){
    int num[10];int sum=0;float avrg;
    for(int i=0;i<10;i++){
        printf("Enter number");
        scanf("%d",&num[i]);
        sum+=num[i];

    }printf("sum%d\n",sum);
    avrg=sum/10;
    printf("avg%f",avrg);
    return 0;
}