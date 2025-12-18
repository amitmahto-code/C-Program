//write a program to find the number of occurrences of an element in a array;
#include<stdio.h>
int main (){
    int arr[5],ch,count=0;
    for(int i=0;i<5;i++){
        printf("enter %d number ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter digit for checking : ");
    scanf("%d",&ch);
    for(int i=0;i<5;i++){
        if(ch==arr[i]){
            count++;
        }
    }
    printf("occurrences of number %d",count);
    return 0;
}