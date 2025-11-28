//write a program to enter price of 3 items and print  their final coast with gst 
#include<stdio.h>
int main(){
    float it[3];float price;
    printf("enter price");
    scanf("%f",&it[0]);

    printf("enter price");
    scanf("%f",&it[1]);

    printf("enter price");
    scanf("%f",&it[2]);

    

    printf("%f\n",it[0]+(0.18*it[0]));
    printf("%f\n",it[1]+(0.18*it[1]));
    printf("%f\n",it[2]+(0.18*it[2]));
    
    
    return 0;

}