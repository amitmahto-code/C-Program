//check number is prime or not using loop 
#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      if(n%i==0){
        count++;
      }
    }
    if(count==2){
      printf("primry number");
    }else{
      printf("not primary number");
    }
    

    return 0;

}