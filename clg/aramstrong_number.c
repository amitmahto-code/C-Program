// Chect number is aramstrong number or not 
#include<stdio.h>
#include<math.h>
int main(){
 int num, tem ,digit ,sum=0;
 printf("Enter number:");
 scanf("%d",&num);
 tem=num;
 while(tem>0){
     digit=tem%10;
    sum=sum+(digit*digit*digit);
    tem=tem/10;

 }
 if(num==sum){
    printf("Aramstrong number");
 }else{
    printf("Not");
 }
 return 0;
}