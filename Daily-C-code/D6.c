//primary number or not using function
#include<stdio.h>
int primarynumber();
int main(){
   primarynumber();
   return 0;

}
int primarynumber(){
    int n,count;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("primary number");
    }
    else{
        printf("not primary number");
    }
    
}