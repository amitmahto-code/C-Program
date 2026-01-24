// Implement a void minmix(int *a,int *b,int *min,int *mix) function that takes two 
//integer pointer a and b as input and assigns the smaller value to min and the larger value max using call by reference 
//write a main function to test it with differet values

#include<stdio.h>
void minmix(int *,int *,int *,int *);

int main(){
    int first ,sec,min,max;
    printf("Enter first number : ");
    scanf(" %d",&first);
    printf("Enter second number : ");
    scanf(" %d",&sec);
    minmix(&first,&sec,&max,&min);
    printf("The max number %d and min number %d",max,min);
    return 0;
}

void minmix(int *a,int *b,int *max,int *min){
    if(*a<*b){
        *max=*b;
        *min=*a;
    }else{
        *max=*a;
        *min=*b;
        
    }
}