// chect the number is perfect ot not 
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            sum+=i;
        }
    }
    if(num==sum){
        printf("perfect number");
    }else{
        printf("Not perfect number");
    }
    return 0;
}