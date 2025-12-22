//write a program to check wether given array is is sorted in descending order.
#include<stdio.h>
int main()
{
    int arr[5]={9,8,7,5,4},flag=0,i=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]>arr[i+1])
        flag=1;
        break;
    }
    if(flag==0){
        printf("no");
    }else{
        printf("yes");
    }
    return 0;
}