// Demonstrate with a function increment that the original integer passed to it does 
//not change after incrementing it inside the function
#include<stdio.h>
int increment(int ,int);
int main(){
    int a=5,b=6;
    // printf("Enter number ");
    // scanf(" %d",&a);
    // printf("Enter number ");
    // scanf(" %d",&b);
    printf("Before call by value %d %d \n",a,b);
    printf("After call by value %d %d \n",increment(a,b));
    printf("here we see that value not change ");

    
}
int increment (int a,int b){
    printf("Enter number ");
    scanf(" %d",&a);
    printf("Enter number ");
    scanf(" %d",&b);
    return a,b;
}