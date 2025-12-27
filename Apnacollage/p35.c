#include<stdio.h>
int main(){
    int arr[5];
    int narr[5];
    int i,j=0,flag=1;
    for(i=0;i<5;i++){
        printf("enter array " );
        scanf("%d",&arr[i]);
    }
    for(i=4;i>=0;i--){
        narr[j]=arr[i];
        j++;
    }
    for(i=0;i<5;i++){
        if(arr[i]!=narr[i]){
        flag=0;
        break;
        }
    }
    if(flag==1){
        printf("p");
    }else
    printf("not");
    return 0;
}