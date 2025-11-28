//Write a program that input three subject marks disply total marks and percentage 
#include<stdio.h>
int main(){
    int a;int  total=0; //float percentage;
    for(int i=3;i>0;i--)
    {
        printf("enter number :-");
        scanf("%d",&a);
        total+=a;
    }
    
    printf("total marks:-%d\n",total);
   //  percentage = (total/300.0)*100;
    printf("percentage%f",(total/300.0)*100);
    return 0;
}