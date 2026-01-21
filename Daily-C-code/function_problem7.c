// Call a function get_average that takes five int number and returns the average 
#include<stdio.h>
float get_average(int ,int ,int,int ,int );
void print();
int main(){
     int a,b,c,d,e;
    print();
    scanf("%d",&a);
    print();
    scanf("%d",&b);
    print();
    scanf("%d",&c);
    print();
    scanf("%d",&d);
    print();
    scanf("%d",&e);
    printf("The average number id %f",get_average(a,b,c,d,e));
    return 0;
}
void print(){
    printf("Enter number: ");
}
float get_average(int a,int b,int c,int d,int e){
   
    float average=(a+b+c+d+e)/5.0;
    return average;

    
}