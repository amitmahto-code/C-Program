#include<stdio.h>
void calculateprice(float  values);
int main(){
    float values=100.0;
    calculateprice(values);
    return 0;

}
void calculateprice(float values){
    values=values+(0.18*values);
    printf("final price is %f ",values);
}