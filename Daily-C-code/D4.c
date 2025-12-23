//Find the first position where array is NOT sorted (Ascending)
#include<stdio.h>
int main(){
    int arr[]={2,4,6,5,7};
    for(int i=0;i<5-1;i++){
        if(arr[i]>arr[i+1]){
            printf("not sorted index at %d",i+1);
        }
    }
    return 0;
}