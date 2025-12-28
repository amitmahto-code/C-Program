//Two- demensional array example in c
#include<stdio.h>
int main(){
    int i=0,j=0;
    int array[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(i=0;i<4;i++)// This loop for row
    {
        for(j=0;j<3;j++)//this loop for column
        {
            printf("arr[%d][%d]= %d\n",i,j,array[i][j]);
        }
    }
    return 0;
}