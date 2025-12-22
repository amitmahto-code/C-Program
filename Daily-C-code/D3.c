// Write a program to check whether the array is sorted or not (either ascending or descending).
#include<stdio.h>
int main()
{
    int arr[5]={5,4,3,2,1};
   //int arr[5]={6,8,10,12,13};
    //int arr[5]={5,4,6,1,9};
    int asc=1,des=1;
    for(int i=0;i<5-1;i++){
        if(arr[i]>arr[i+1])
            asc=0;
            
        if(arr[i]<arr[i+1])
            des=0;
    }
    if(asc || des){
        printf("yes");
    }
    else{
        printf("not");
    }
    return 0;
}