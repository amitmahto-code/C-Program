//chect number is prime or not 
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime number");
    }else{
        printf("Not prime number");
    }
    return 0;
}