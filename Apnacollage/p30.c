//write a program to check if the given array is stored ;
#include<stdio.h>
int main()
{
    int arr[5],sort=1;

    for(int i=0;i<5;i++){
        printf("Enter number  ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5-1;i++){
        if(arr[i]>arr[i+1]){
            sort=0;
            break;

        }

    }
    if(sort){
        printf("array is sorted");

    }else{
        printf("not");
    }
     return 0;
}