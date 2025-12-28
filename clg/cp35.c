/*Two-Dimensional array to store and printt values
C programm to store temperature of two cities of a week and dispaly it.*/
#include<stdio.h>
#define city 2
#define week 7
int main(){
    int tem[city][week];
    int i,j;
    for(i=0;i<city;i++)
    {
        for(j=0;j<week;j++){
            printf("Enter city %d, Day %d  ", i+1,j+1);
            scanf("%d",&tem[i][j]);
        }
    }
    for(i=0;i<city;i++){
        for(j=0;j<week;j++){
            printf("city %d, Day %d= %d \n",i+1,j+1,tem[i][j]);
        }
    }
    return 0 ;

}