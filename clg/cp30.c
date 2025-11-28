//write a program that input multipal number ingore nagative number till enter 0.finaly display of all even positive number
#include<stdio.h>
int main(){
    int n,sum=0;
   while(1){
     printf("enter number");
   scanf("%d",&n);
  
    if(n%2==1){
    continue;}
    
    if(n==0)
    break;
    if(n>0){
    sum+=n;}
   }
   printf("%d",sum);
   
}