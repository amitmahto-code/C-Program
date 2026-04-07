//write a c program to sort numeric array in ascending or descending order using UDF
#include<stdio.h>

void asce(int arr[],int n );
void desc(int arr[],int n);
int main(){
    int array[5]={4,3,6,3,9};
    asce(array,5);
    printf("\n");
    desc(array,5);

}

void asce(int arr[],int n ){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
} 
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

}
void desc(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
        if(arr[j]<arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    } 
    }
        for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }

}