// Adding two matrix and display sum of two matrix and Subtraction  
#include<stdio.h>
int main(){
    int a[3][3],b[3][3], sum[3][3],sub[3][3];
    int i,j;
    printf("Enter matrix A element \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter matrix Element :");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter matrix B element\n ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter matrix element :");
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of two matrix \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf(" %d \t",sum[i][j]);
        }
        printf("\n");
    }
    printf("Subtration of two matrix \n");
      for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sub[i][j]=a[i][j]-b[i][j];
            printf(" %d \t",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}