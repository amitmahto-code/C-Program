// create a function max that takes two float arguments and returns the larger value.
#include<stdio.h>
float max(float,float);

int main(){
    float a,b;
    printf("Enter first number ");
    scanf(" %f",&a);
    printf("Enter Second number ");
    scanf(" %f",&b);
    printf("Largest number is %f",max(a,b));
    return 0;
}

float max(float first,float second){
    if(first<=second)
        return first;
    if(first>=second)
        return second;
    
}