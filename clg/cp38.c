//Multiplication of two matricx
#include<stdio.h>
int main(){
    int m1[10][10],m2[10][10],mul[10][10],i,j,k,r1,c1,r2,c2;
    printf("enter row and column of first matrixs \n ");
    scanf("%d%d",&r1,&c1);
    printf("enter row and column of second matrixs ");
    scanf("%d%d",&r2,&c2);
    while (c1!=r2)
    {
    printf("Error !!! enter row and column agin\n");
    printf("enter row and column of first matrixs ");
    scanf("%d%d",&r1,&c1);
    printf("enter row and column of second matrixs ");
    scanf("%d%d",&r2,&c2);
        
    }
    printf("Enter first matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Enter matrix element");
            scanf("%d",&m1[i][j]);
        }
    }
    printf("Enter second matrix \n");
      for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Enter matrix element");
            scanf("%d",&m2[i][j]);
        }
    }
    printf("multiplication of two matrix\n");
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            mul[i][j]=0;
        }for(k=0;k<r2;k++){
            mul[i][j]=mul[i][j]+(m1[i][k]*m2[k][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }

    return 0;



}