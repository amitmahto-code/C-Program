//write a program using recursion to display the fibonacci series upto a certain number
#include<stdio.h>
int fibonacci(int pos);
int main(){
     int num;
     printf("Enter number: ");
     scanf("%d",&num);
    //  printf("Fibonachi %d",fibonacci(num));
    for(int i=0;i<num;i++){
        printf(" %d",fibonacci(i));
    }

     return 0;
}
int fibonacci(int pos){
    if(pos<=1){
        return pos;
    }
    return fibonacci(pos-1)+fibonacci(pos-2);
}