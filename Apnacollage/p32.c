//write a progrsm to count how many times a given number occurs in an array
#include<stdio.h>
int main(){
    int arr[5],n,flag=0;
    for(int i=0;i<5;i++){
        printf("enter element arr[%d]",i+1);
        scanf("%d",&arr[i]);
    }
    printf("enter number to count ");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(n==arr[i]){
            flag++;
        }
    }
    if(flag==0){
        printf("not found");
    }
    printf("element %d time ",flag);
    return 0;
}