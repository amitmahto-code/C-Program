//Use of j<n-1-i 
#include<stdio.h>
int main(){
    int arr[]={1,3,2,4};
    int swapped;
    for(int i=0;i<3;i++){
        swapped =0;
        for(int j=0;j<3-1-i;j++){
            if(arr[j]>arr[j+1])
            {
                int tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
                swapped =1;
            }

        }
            if(swapped==0)
             break;
    }
    printf("sorted\n");
    for(int i=0;i<4;i++){
        printf("%d",arr[i]);
    }
    return 0;
}