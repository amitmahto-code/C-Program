//Write a program to search an element in an array (Linear Search).
#include<stdio.h>
int main()
{
    int arr[5],n,flag=0,count=0;
    for(int i=0;i<5;i++){
        printf("Enter element array[%d]",i+1);
        scanf(" %d",&arr[i]);
    }
    printf("Enter to search element in array ");
    scanf(" %d",&n);
    for(int i=0;i<5;i++)
    {
        if(n==arr[i]){
            printf("The %d number found at %d position in array \n",n,i+1);
            flag++;
            break;

        }
      
    }
      if(flag==0){
            printf("not found");
        }
        
    return 0;
}