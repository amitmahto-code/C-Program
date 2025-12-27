//write  a program to return a new array deleting a specific element 
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int newarr[4];
    int i,j=0,del;
    printf("enter deleting element ");
    scanf("%d",&del);
    for(i=0;i<4;i++){
        if(arr[i]!=del){
            newarr[j]=arr[i];
            j++;
        }
    }
    printf("new array \n");
    for(i=0;i<j;i++){
        printf("%d",newarr[i]);
    }
    return 0;
}