//write a function that add that 4 int perameter and returns the sum
#include<stdio.h>
int add(int ,int ,int ,int);

int main(){
     
    printf("sum of number: %d\n",add(5,6,7,8));
    printf("sum of number: %d\n",add(9,6,7,8));
    printf("sum of number: %d\n",add(2,6,7,8));
    printf("sum of number: %d\n",add(8,6,7,8));
    return 0;
}
int add(int a,int b,int c,int d){
    int sum=a+b+c+d;
    return sum;
}