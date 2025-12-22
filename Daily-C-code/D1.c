//write a program to check wether given array is is sorted in ascending order.
#include<stdio.h>
int main()
{
    int arr[5]={5,6,7,8,9};
    int flag=0,i=0;
    for(i=0;i<5;i++){
        if(arr[i]<arr[i+1])
        flag=1;
        break;
    }
    if(flag==0){
        printf("no");
    }else
    printf("yes");
    return 0;
}
