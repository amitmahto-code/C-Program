//write a funcation to count the number of odd number in arry.
#include<stdio.h>
int oddnumber(int num[], int n);

int main(){
        int num[10];
        for(int i=0;i<10;i++){
            printf("enter number");
            scanf("%d",&num[i]);
        }
        printf("count =%d",oddnumber(num , 10));


    return 0;
}

int oddnumber(int num[], int n){
    int count=0;
    for(int i=0;i<=n;i++){
        if(num[i]%2==1){
            count++;
        }
    }return count;
}