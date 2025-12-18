// create a program to find the maximum and minimum element ia an arry;
#include<stdio.h>
int main(){
    int arr[5],max,min;
    for(int i=0;i<5;i++){
    printf("enter %d number ",i+1);
    scanf("%d", &arr[i]);
    }
    max=min=arr[0];
    for(int i=0;i<5;i++){
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    printf("\nmaximum number %d",max);
    printf("\nMinimum number %d",min);

    return 0;

      
}