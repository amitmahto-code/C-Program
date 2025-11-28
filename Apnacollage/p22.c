// write a function to print "hot" or "cold" depended on the temperature user enter 

#include<stdio.h>

float tem(float n);
int main(){
    float n;
    printf ("enter number");
    scanf("%f",&n);
    tem(  n);
    return 0;

}

float tem(float n){
    

    if (  n<=1){
        printf("cold");
    }else  {
     printf("hot");
    }
    
}