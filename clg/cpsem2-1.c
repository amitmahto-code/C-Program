/*write a menu base c program with following 
    1. addition of two matrix
    2. Subtraction of two matrix
    3. Multiplication of two matrix
    4. Exit*/
#include<stdio.h>

int main(){
    int n1[2][2]={5,6,8,9};
    int n2[2][2]={7,8,7};
    int sum[2][2];
    int cho;
    printf("Enter choice (1-4): ");
    scanf("%d",&cho);
    switch (cho)
    {
    case 1: printf("addition to matricx\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                   sum[i][j]=n1[i][j]+n2[i][j];
                   printf("%d\t",sum[i][j]);
                  
                }printf("\n");
            }
                 break;
    case 2:printf("Subtraction to matricx\n");
            for(int i=0;i<2;i++){
                for(int j=0;j<2;j++){
                   sum[i][j]=n1[i][j]-n2[i][j];
                   printf("%d\t",sum[i][j]);
                  
                }printf("\n");
            }
                break;
    case 3: printf("Multiplication of matrix\n");
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j] = 0;   
            
            for(int k=0;k<2;k++){
                sum[i][j] += n1[i][k] * n2[k][j];
            }
            
            printf("%d\t", sum[i][j]);
        }
            printf("\n");
    }
            break;
    case 4: printf("Exit");
            break;
    default: printf("Invalid");    
        } 
    
        printf("\nThanku");
        return 0;  
    }
    
