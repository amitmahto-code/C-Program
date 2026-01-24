//change the value in main function usign call by referance
#include<stdio.h>
void swap(int*,int*);

int main(){
    int x=4;
    int y=56;
    printf("value X= %d , y= %d",x,y);
    swap(&x,&y);
    printf("\nvalue X= %d , y= %d",x,y);
}
void swap(int *ptr1,int* ptr2){
    printf("\nvalue X= %d , y= %d",*ptr1,*ptr2);
    int tem =*ptr1;
    *ptr1=*ptr2;
    *ptr2=tem;
    printf("\nvalue X= %d , y= %d",*ptr1,*ptr2);
}