//define function square that takes an int and return its square
#include<stdio.h>

int square(int);
int main(){
    printf("Square of number : %d",square(5));
    
    return 0;
}
int square(int a){
    return a*a;
}