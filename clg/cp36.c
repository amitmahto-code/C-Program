//2D array example storing elememt in a matrix and printing it

#include<stdio.h>
int main(){
    int arr[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter array[%d][%d]",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n printing element \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}