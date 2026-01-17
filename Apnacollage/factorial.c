#include<stdio.h>

int factorial(int );
int resursion(int);

int main(){
    int res = factorial(4);
    printf("Factorial of number :- %d",res);
    int res2 = factorial(7);
    printf("\nFactorial of number :- %d",res2);
    return 0;
}

int factorial(int num){
    int result=1;
    for(int i=2;i<=num;i++){
        result*=i;
    }
    return result;
}
int resursion(int num){
    if(num==0){
        return 1;
    }
    return num*=resursion(num-1);

}