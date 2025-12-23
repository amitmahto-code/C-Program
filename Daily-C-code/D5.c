//Learn bubble sort swap 
#include<stdio.h>
int main(){
    int arr[]={5,4,3,2,1};
    for(int i=0;i<5-1;i++){
        for(int j=0;j<5-1;j++){
            if(arr[j]>arr[j+1]){
                int tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);

    }
    
    
    return 0;
}